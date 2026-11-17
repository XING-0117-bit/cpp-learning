#define _CRT_SECURE_NO_WARNINGS
#include"string.h"
namespace mystd
{
	// 类内写的 static const size_t npos = -1 只是声明；
	// 如果以后被 odr-use（比如取地址、绑定引用），需要在类外给出定义（C++17 之前尤其必要）
	const size_t string::npos;

	// 自己判断空白字符：不依赖 <cctype>，避开同名头文件带来的包含问题
	static bool is_space(char ch)
	{
		return ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r' || ch == '\v' || ch == '\f';
	}

	string::string()
		:_str(new char[1]),
		_size(0),
		_capacity(0)
	{
		_str[0] = '\0';
	}
	// 传统写法：strlen(str) + 1 是为了给字符串结束符 '\0' 留一个字节
	// 加空指针判断：写 mystd::string s(nullptr); 时 strlen(nullptr) 会直接崩溃
	string::string(const char* str)
		:_str(new char[(str == nullptr ? 0 : strlen(str)) + 1])
	{
		_size = (str == nullptr ? 0 : strlen(str));
		_capacity = _size;
		strcpy(_str, str == nullptr ? "" : str);
	}
	// 现代写法：copy-and-swap。参数按值传进来时就已经完成了一次拷贝；
	// 再把当前对象和 tmp 交换，tmp 析构时会自动释放原来的旧空间。
	// 自赋值 s = s 也安全（只是多拷贝一次再换回来），且天然满足异常安全：
	// 拷贝失败时原对象完全没被改动。
	string& string::operator=(string tmp) {
		swap(tmp);
		return *this;
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
		if (str == nullptr)   // 空指针直接忽略，避免 strlen(nullptr) 崩溃
		{
			return;
		}
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
	string& string::operator+=(const string& rhs)
	{
		append(rhs._str);   // append 内部会按需扩容并补 '\0'
		return *this;
	}
	// 修改：返回类型由 string& 改为 string（传值返回）
	// 原因：tmp 是本函数栈上的局部对象，函数一返回它就析构销毁了，
	// 返回它的引用等于把一块已经释放的空间交给外面继续用（悬空引用，未定义行为）；
	// 而 + 的语义本来就是"不修改左右操作数、产出一个新结果"，正好应该传值返回
	string string::operator+(const string& rhs) const
	{
		string tmp(*this);   // 深拷贝一份左操作数，避免 + 把 *this 改掉
		tmp += rhs;          // 复用已实现的 operator+=，把右操作数接到 tmp 后面
		return tmp;          // 传值返回；局部对象不能返回引用，否则调用方拿到悬空引用
	}
	string string::operator+(const char* str) const
	{
		string tmp(*this);
		tmp += str;
		return tmp;
	}
	void string::insert(size_t pos,const char ch)  //插入一个字符
	{
		// pos 超过有效长度时按"尾部插入"处理，避免写到 '\0' 后面的垃圾区域
		if (pos > _size)
		{
			pos = _size;
		}
		if (_size + 1 > _capacity)   //多出来的 1 个位置留给 '\0'
		{
			resever(_size + 1);
		}
		// 用 size_t 从后往前搬，循环条件写成 end > pos，
		// 这样 pos==0 时 end 减到 0 就停止，不会像 int 版那样出现 -1 的比较问题
		size_t end = _size;
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			end--;
		}
		_str[pos] = ch;
		_size++;
		_str[_size] = '\0';   // 别忘了重新补上结束符，否则 c_str()/strcmp 会读越界
	}
	void string::insert(size_t pos, const char* str)  //插入字符串
	{
		if (str == nullptr)
		{
			return;
		}
		if (pos > _size)
		{
			pos = _size;
		}
		size_t len = strlen(str);
		if (len == 0)
		{
			return;
		}
		if (len + _size > _capacity)
		{
			resever(_size + len);
		}
		// 从后往前把 [pos, _size] 整体右移 len 个位置，
		// 下标最大用到 _size + len，上面 reserve 已经保证不会越界
		size_t end = _size;
		while (end > pos)
		{
			_str[end + len - 1] = _str[end - 1];
			end--;
		}
		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;
		_str[_size] = '\0';
	}
	void string::swap(string& s) {
		// 手写三交换，避免引入额外头文件（本目录下的 string.h 会干扰标准库的同名头文件）
		char* tmpStr = _str;      _str = s._str;      s._str = tmpStr;
		size_t tmpSize = _size;   _size = s._size;    s._size = tmpSize;
		size_t tmpCap = _capacity; _capacity = s._capacity; s._capacity = tmpCap;
	}
	  
	void string::erase(size_t pos , size_t len)
	{
		if (pos > _size)   // 越界位置直接忽略，避免 _size - pos 出现无符号下溢
		{
			return;
		}
		size_t remain = _size - pos;   // pos 之后还剩多少个字符
		if (len == string::npos || len >= remain)  // 删到末尾：std::string 的语义是"剩下的全删"
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else if (len > 0)
		{
			// 把后面没被删的字符整体前移 len 个位置，再补 '\0'
			size_t count = remain - len;
			for (size_t i = 0; i < count; i++)
			{
				_str[pos + i] = _str[pos + len + i];
			}
			_size -= len;
			_str[_size] = '\0';
		}
		// len == 0 时什么都不用做
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
		if (str == nullptr || pos > _size)
		{
			return npos;
		}
		// 第三个参数 len 表示"只匹配 str 的前 len 个字符"，strstr 做不到，
		// 所以这里用 strncmp 自己逐位置比较；len 为 npos 时按完整 C 字符串处理
		size_t n = (len == string::npos ? strlen(str) : len);
		if (n > strlen(str))   // 传入的 len 比 str 本身还长时按 str 的实际长度截断，防止读越界
		{
			n = strlen(str);
		}
		if (n == 0)
		{
			return pos;   // 空串在任何位置都匹配
		}
		for (size_t i = pos; i + n <= _size; i++)
		{
			if (strncmp(_str + i, str, n) == 0)
			{
				return i;   // 返回相对整个字符串的绝对下标
			}
		}
		return npos;
	}
	string string::substr(size_t pos, size_t len )
	{
		// 原代码有三处错误：
		// 1) pos 没检查，pos > _size 时 _size - pos 无符号下溢，len 会变成天文数字；
		// 2) 判断写成了 len < _size - pos，而 npos 是 SIZE_MAX，条件永远不成立，
		//    结果按 npos 个字符去取，必然越界崩溃；正确应为 len > 剩余长度；
		// 3) reserve 调在了 this 上而不是新建的 sub 上，新对象还是从 0 容量开始反复扩容
		if (pos > _size)
		{
			pos = _size;
		}
		size_t remain = _size - pos;
		if (len == string::npos || len > remain)
		{
			len = remain;
		}
		string sub;
		sub.resever(len);
		for (size_t i = 0; i < len; i++)
		{
			sub += _str[pos + i];
		}
		return sub;
	}
	bool operator==(const string& lhs, const string& hs)
	{
		return strcmp(lhs.c_str(), hs.c_str())==0;
	}
	bool operator<(const string& lhs, const string& rhs)
	{
		return strcmp(lhs.c_str(), rhs.c_str()) < 0;
	}
	bool operator>(const string& lhs, const string& hs)
	{
		return strcmp(lhs.c_str(), hs.c_str()) > 0;
	}
	bool operator<=(const string& lhs, const string& hs)
	{
		return lhs < hs || lhs == hs;
	}
	bool operator>=(const string& lhs, const string& hs)
	{
		return lhs > hs || lhs == hs;
	}
	bool operator!=(const string& lhs, const string& hs)
	{
		return !(lhs == hs);
	}
	istream& operator>>(istream& in, string& s)
	{
		s.erase();   // 输入操作符的语义是覆盖原有内容，而不是追加
		char ch;
		// 跳过前导空白（和 std::string 的 >> 行为一致）
		while (in.get(ch) && is_space(ch))
		{
		}
		if (!in)   // 只遇到空白/文件结束，直接返回，流状态由 in 自己记录
		{
			return in;
		}
		char buff[128];
		size_t i = 0;
		do
		{
			buff[i++] = ch;
			// 缓冲区只剩最后一个字节时先交给 s 保存，再继续复用缓冲区。
			// 原来写死 i == 127 且用 int i，这里用 sizeof 更安全，避免魔数写错
			if (i == sizeof(buff) - 1)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
		} while (in.get(ch) && !is_space(ch));
		if (i > 0)   // 收尾：把缓冲区里剩下的不足 127 个字符接上
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}
	ostream& operator<<(ostream& out, const string& s)
	{
		// 原实现有三个问题：返回类型是 ostream（按值），末尾没有 return（C4716 直接编译失败），
		// 而且写死 cout 并自己加 endl —— 传 cerr/文件流时会输出错地方，
		// 调用方再写 << endl 还会多一个空行。改为写传入的 out 并返回 out&，即可支持链式输出
		for (auto ch : s)   // s 是 const，这里调用的是 const 版 begin()/end()
		{
			out << ch;
		}
		return out;
	}
	istream& getline(istream& in, string& s, char stop)
	{
		s.erase();
		char ch;
		char buff[128];
		size_t i = 0;
		// 必须用 in.get(ch) 的返回值控制循环。
		// 原代码只判断 ch != stop，若输入里没有 '*'（或者输入结束时），
		// get() 失败后 ch 会保持旧值，条件永远成立 → 死循环并把 buff 写越界
		while (in.get(ch) && ch != stop)
		{
			buff[i++] = ch;
			if (i == sizeof(buff) - 1)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
		}
		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

}

 
