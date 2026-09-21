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
	Date(Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print()
	{
		cout<<_year<<"/" << _month << "/" << _day << endl;

	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2026, 1, 17);
	Date d2(d1);
	d1.Print();
	d2.Print();
	return 0;
}