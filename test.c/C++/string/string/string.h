#pragma once   // 防止头文件被重复包含（原文件没有，多个源文件包含时容易重定义）
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
// 注意：本文件就叫 string.h，不能再 #include<cstring>。
// CRT 的 <cstring> 内部会 #include<string.h>，会优先找到当前目录下的这个同名文件，导致递归包含。
// strlen/strcpy/strcmp 等函数由 <iostream> 间接引入，和原代码保持一致即可。
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
		string(const string& s);   // 拷贝构造（深拷贝），operator+ 里拷贝 *this 时必须用到
		~string();
		const char* c_str()const
		{
			return _str;
		}
		// size() 不修改对象，加 const 后 const string 也能调用（operator<< 里要用）
		size_t size()const
		{
			return _size;
		}
		char& operator[](int n)
		{
			return _str[n];
		}
		// 非 const 版本：返回普通指针，通过 *it = 'x' 可以修改字符
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str+_size;
		}
		// const 版本：const 对象（如 operator<< 的参数）只能拿到 const_iterator，
		// 这样 range-for 才能正常编译，同时保证只读不能改内容
		const_iterator begin()const
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}
		void append(const char*str);
		void push_back(const char ch);
		void resever(size_t n);   // 拼写沿用旧代码（本意是 reserve），改名会破坏已有调用
		void operator+=(const char* str);
		void operator+=(const char ch);
		string& operator+=(const string& str);   // 加 const&：避免传参时再拷贝一份整个字符串
		string operator+(const string& rhs)const;   // const：+ 不修改左右操作数，返回新对象（原来返回引用会悬空）
		string operator+(const char* str)const;
		void insert(size_t pos,const char ch);
		void insert(size_t pos, const char* str);
		static const size_t npos = -1;
		void erase(size_t pos = 0, size_t len=string::npos);
		size_t find(const char ch, size_t pos=0);  
		size_t find(const char*str, size_t pos=0,size_t len=string:: npos); 
		string substr(size_t pos = 0, size_t len = string::npos);
		// 只保留"按值传参 + swap"这一版：它同时接管拷贝和移动。
		// 如果再保留 operator=(const string&)，写 s1 = s2 时两个重载都能匹配，会产生二义性（C2666）
		string& operator=(string tmp);
		void swap(string& s);

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
	istream& operator>>(istream& in, string& s);
	// 返回 ostream& 才能继续链式输出：cout << s << endl;
	// 返回 ostream（按值）会要求拷贝流对象（拷贝构造被禁用），而且原实现没有 return，直接编译报错 C4716
	ostream& operator<<(ostream& out, const string& s);
	istream& getline(istream& in, string& s, char stop);
	bool operator==(const string& lhs, const string& hs);
	bool operator<(const string& lhs, const string& hs);
	bool operator>(const string& lhs, const string& hs);
	bool operator<=(const string& lhs, const string& hs);
	bool operator!=(const string& lhs, const string& hs);
	bool operator>=(const string& lhs, const string& hs);

}