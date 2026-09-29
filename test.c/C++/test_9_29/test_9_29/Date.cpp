#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
Date::Date(int year,int month,int day)
{
	_year = year;
	_month = month;
	_day= day;
}
bool Date::operator==(const Date& d) const
{
	return _year == d._year &&
		_month == d._month &&
		_day == d._day;
}
bool Date::operator>(const Date& d) const
{
	if (_year > d._year)
	{
		return true;
	}
	else if(_year==d._year)
	{
		if (_month > d._month)
		{
			return true;
		}
		else if(_month==d._month)
		{
			if (_day > d._day)
			{
				return true;
			}
		}
	}
	return false;
}
bool Date::operator>=(const Date& d) const
{
	return (*this > d) || (*this == d);
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}
bool Date::operator<(const Date& d)
{
	return !(*this >=  d);
}
int GetMonthDay(int year, int month)
{
	int MonthArr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 29;
	return MonthArr[month];
}
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year,_month);
		++_month;
		if (_month >= 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day)
{
	Date tmp = *this;
	*this += day;
	return *this;
}