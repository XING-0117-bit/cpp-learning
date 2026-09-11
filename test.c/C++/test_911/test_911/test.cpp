#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(Date*const this, int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout<<_year<<"/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class B
//{
//public:
//	void Date(int year, int month, int day);
//private:
//	       //成员变量为空
//};
//class C
//{
//	      //类为空
//};
//int main()
//{
//	Date d1;
//	d1.Init(2026, 9, 11);
//	d1.Print();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Date
//{
//public:    //在这里加入this指针就会报错
//	void Init(Date* const this, int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Init(2026, 9, 11);
//	d1.Print();
//	return 0;
//}
//_year = year;
//this->_month = month;
//this->_day = day;
#include<iostream>
using namespace std;
class Date
{
public:    //在这里加入this指针就会报错
	//void Init(Date* const this, int year, int month, int day)
	void Init(int year,int month,int day)
	{
		_year = year;
		this->_month = month;   //体现在函数体中是可以的
		this->_day = day;
	}
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Init(2026, 9, 11);
	d1.Print();
	return 0;
}