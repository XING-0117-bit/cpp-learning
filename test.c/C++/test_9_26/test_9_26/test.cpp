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
	Date& operator++()
	{
		cout << "前置++" << endl;
		return *this;
	}
	Date operator++(int)
	{
		Date tmp;
		cout << "后置++" << endl;
		return tmp;
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
	Date d1(2026, 1, 17);
	Date d2(2026, 3, 25);
	d1++;
	d1.Print();
	++d1;
	d1.Print();
	return 0;

}