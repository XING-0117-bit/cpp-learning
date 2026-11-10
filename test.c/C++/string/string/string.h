#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
namespace mystd
{
	typedef  char* iterator;
	typedef const char* const_iterator;

	class string
	{
	public:
		string();
		string(const char* str);
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
		void resever(size_t n);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}