#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()const
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
	Date d1(2026,1,17);
	d1.Print();
	const Date d2(2026, 3, 25);
	d2.Print();   //在这里因为d2加了const，所以就不能正常调用Print这个函数了
	return 0;
}