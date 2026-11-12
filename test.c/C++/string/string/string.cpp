#define _CRT_SECURE_NO_WARNINGS
#include"string.h"
namespace mystd
{
	string::string()
		:_str(new char[1]),
		_size(0),
		_capacity(0)
	{
		_str[0] = '\0';
	}
	string::string(const char* str)
		:_str(new char[strlen(str)+1])
	{
		_size = strlen(str);
		_capacity = strlen(str);
		strcpy(_str, str);
	}
	// 新增：拷贝构造——必须自己写成深拷贝
	// 原因：这个类自己管理堆空间（_str 指向 new 出来的数组），如果不写拷贝构造，
	// 编译器默认生成的拷贝构造只会把指针的值原样抄一份（浅拷贝），
	// 两个对象的 _str 就会指向同一块空间：一个对象先析构，另一个就成了悬空指针，
	// 而且同一块空间最后会被 delete[] 两次，程序直接崩溃
	string::string(const string& s)
		:_str(new char[s._size+1]),   // 按对方的大小另开一块全新的空间，多留 1 个字节放 '\0'
		_size(s._size),               // 有效字符数、容量照着对方抄
		_capacity(s._size)
	{
		strcpy(_str, s._str);        // 把字符串内容复制到新空间，从此两个对象各用各的空间，互不影响
	}
	string::~string()   //析构
	{
		delete[]_str;
		_str = nullptr;
		_capacity = _size = 0;
	}
	void string::resever(size_t n)
	{
		if (n >_capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp , _str);
			delete[]_str;
			_str = tmp;
			_capacity = n;
		}
	}
	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size+len >_capacity)
		{
			resever(len + _size + 1);
		}
		strcpy(_str + _size, str);
		_size = _size + len;
	}
	void string::push_back(const char ch)
	{
		if (_size + 1 > _capacity)
		{
			resever(_size+1);
		}
		_str[_size] = ch;//这里加引号为什么会报错
		_size++;
		_str[_size ] = '\0';
	}
	void string::operator+=(const char* str)
	{
		append(str);
	}
	void string::operator+=(const char ch)
	{
		push_back(ch);
	}
	string& string::operator+=(const string rhs)
	{
		this->append(rhs._str);
		return *this;
	}
	// 修改：返回类型由 string& 改为 string（传值返回）
	// 原因：tmp 是本函数栈上的局部对象，函数一返回它就析构销毁了，
	// 返回它的引用等于把一块已经释放的空间交给外面继续用（悬空引用，未定义行为）；
	// 而 + 的语义本来就是"不修改左右操作数、产出一个新结果"，正好应该传值返回
	string string::operator+(const string& rhs)
	{
		string tmp(*this);   // 调用上面新写的深拷贝构造复制一份左操作数，避免 + 把 *this 改掉
		tmp += rhs;          // 复用已实现的 operator+=，把右操作数接到 tmp 后面
		return tmp;          // 传值返回：把 tmp 拷贝一份交给调用方（tmp 自己随后正常析构，互不影响）
	}
	string string::operator+(const char* str)
	{
		string tmp(*this);
		tmp += str;
		return tmp;
	}
	void string::insert(size_t pos,const char ch)  //插入一个字符
	{
		size_t len = _size + 1;
		if (len > _capacity)   //预留空间
		{
			resever(_capacity==0?4:_capacity*2);
		}
		int end = _size;
		while (end >=(int)pos)   //必须要强转 否则无符号是没有负值的，导致无限循环
		{
			_str[end+1] = _str[end];
			end--;
		}
		_str[pos] = ch;
		_size++;
	}
	void string::insert(size_t pos, const char* str)  //插入字符串
	{
		size_t len = strlen(str);
		if (len+_size > _capacity)
		{
			resever(_size+len+1);
		}
		int end = _size+len;
		while (end >(int)pos + len - 1)     //条件改变 防止越界访问
		{
			_str[end] = _str[end - len];
			end--;
		}
		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;

	}
	  
	void string::erase(size_t pos , size_t len)
	{
		if (len==string::npos||len > _size-pos)  //pos后面的全部删除
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			int count = _size - len - pos;  //计数
			for (size_t i = 0; i <count ; i++)
			{
				_str[pos] = _str[pos + len];
				pos++;
			}
			_str[pos] = _str[_size];  
			_size -= len;
		}

	}
	size_t string::find(const char ch, size_t pos) 
	{
		if (pos < _size)
		{
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
		}
		return npos;
	}
	size_t string::find(const char* str, size_t pos, size_t len) 
	{
		    char*p=strstr(_str+pos, str);
			if (p == nullptr)

			{
				return npos;
			}

		return p-_str;
	}
	string string::substr(size_t pos, size_t len )
	{
		if (len == string::npos || len < _size - pos)
		{
			len = _size - pos;
		}
		string sub;
		resever(len);
		for (size_t i = 0; i < len; i++)
		{
			sub += _str[pos+i];
		}
		return sub;

	}


}

 
