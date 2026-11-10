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
		len = _size + len;
	}
}
 
