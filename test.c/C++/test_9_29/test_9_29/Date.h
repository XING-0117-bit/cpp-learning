#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	bool operator==(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<=(const Date& d);
	bool operator<(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);
private:
	int _year;
	int _month;
	int _day;
};