#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

private:
	// 这⾥只是声明，没有开空间
	int _year;
	int _month;
	int _day;
};

int main()
{
	// Date类实例化出对象d1和d2
	Date d1;
	Date d2;

	d1.Init(2024, 3, 31);
	d1.Print();

	d2.Init(2024, 7, 5);
	d2.Print();
	return 0;
}

#include<iostream>
using namespace std;
// 计算⼀下A/B/C实例化的对象是多⼤？
class A
{
public:
	void Print()
	{
		cout << _ch << endl;
	}
private:
	char _ch;
	int _i;
};
class B
{
public:
	void Print()
	{
		//...
	}
};
class C
{};
int main()
{
	A a;
	B b;
	C c;
	cout << sizeof(a) << endl;
		cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	return 0;
}