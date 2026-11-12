#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
namespace mystd
{
	typedef  char* iterator;
	typedef const char* const_iterator;

	class string
	{
	public:
		string();
		string(const char* str);
		string(const string& s);   // 新增：拷贝构造（深拷贝），operator+ 里拷贝 *this 时必须用到
		~string();
		const char* c_str()
		{
			return _str;
		}
		size_t size()
		{
			return _size;
		}
		char& operator[](int n)
		{
			return _str[n];
		}
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str+_size;
		}
		void append(const char*str);
		void push_back(const char ch);
		void resever(size_t n);
		void operator+=(const char* str);
		void operator+=(const char ch);
		string& operator+=(const string str);
		string operator+(const string& rhs);   // 修改：+ 必须传值返回新对象，返回局部对象的引用会悬空
		string operator+(const char* str);
		void insert(size_t pos,const char ch);
		void insert(size_t pos, const char* str);
		static const size_t npos = -1;
		void erase(size_t pos = 0, size_t len=string::npos);
		size_t find(const char ch, size_t pos=0);  
		size_t find(const char*str, size_t pos=0,size_t len=string:: npos); 
		string substr(size_t pos = 0, size_t len = string::npos);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
	
}