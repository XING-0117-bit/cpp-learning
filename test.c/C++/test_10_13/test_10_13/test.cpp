#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(2026),
//		//_year(year),  //❌️每个成员变量在初始化列表的时候只能出现一次
//		_month(10),
//		_day(13)
//	{
//
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	int const a;   //const修饰的成员变量只能在定义的时候初始化一次，
//	a = 1;              //所以这种写法是错误的
//};
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(2026),
//		_month(10),
//		_day(13),
//		a(1)        //在这里初始化就正确了
//	{
//		//a = 1;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	int const a;   //const修饰的成员变量只能在定义的时候初始化一次，
//	//a = 1;              //所以这种写法是错误的
//};
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//    Date(int year = 1, int month = 1, int day = 1)
//        : _year(year),
//        _month(month),
//        _day(day),
//        a(1)
//    {}
//
//    void Print()
//    {
//        cout << _year << "/" << _month << "/" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//    const int a;
//};
//
//int main()
//{
//    Date d1;
//    d1.Print();
//    return 0;
//}
#include<iostream>
using namespace std;
class Time
{
public:
	Time(int x)
		:_hour(x)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;
};
class Date
{
public:
	Date(int& rx, int year = 1, int month = 1, int day = 1)
		:_year(2026),
		_month(10),
		_day(13),
		a(1),
		_rax(rx),
		_t(4)       //用初始化列表把类类型的变量转化成可以被初始化地方格式
	{
		
	}
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
		cout << _rax << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	int const a; 
	int& _rax;
	Time _t;
};
int main()
{
	int x = 1;
	Date d1(x);
	d1.Print();
	return 0;
}