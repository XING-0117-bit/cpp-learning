//Date.cpp
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
bool Date::operator!=(const Date& d) const
{
	// 修改：新增，等价于 !(*this == d)
	return !(*this == d);
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
bool Date::operator<=(const Date& d) const
{
	return !(*this > d);
}
bool Date::operator<(const Date& d) const
{
	return !(*this >=  d);
}
int GetMonthDay(int year, int month)
{
	int MonthArr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		return 29;
	return MonthArr[month];
}
bool Date::DateCheck()
{
	// 修改：月份上限判断原来误写成 _year > 12，且漏了 _month < 1
	if (_year < 1 || _month < 1 || _month > 12 ||
		_day<1 || _day>GetMonthDay(_year, _month))
	{
		return false;
	}
	else
	{
		return true;
	}

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
	tmp += day;
	return tmp;
}
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp._day -= day;
	while (tmp._day < 1)
	{
		--tmp._month;
		if (tmp._month == 0)
		{
			--tmp._year;
			tmp._month = 12;
		}
		tmp._day += GetMonthDay(tmp._year, tmp._month);
	}
	return tmp;
}
Date& Date::operator-=(int day)
{
	*this = *this - day;
	return *this;
}
Date Date::operator++(int day)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
Date Date::operator++()
{
	*this += 1;
	return *this;
}
int Date::operator-(const Date& d) const
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if ( *this < d)
	{
		 max = d;
		 min = *this;
		 flag = -1;
	}
	int n = 0;
	while (max != min)
	{
		++min;
		++n;
	}
	return flag * n;

}
// 新增：重载输出运算符 <<，用友元方式访问 _year/_month/_day
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}
// 新增：重载输入运算符 >>
istream& operator>>(istream& in, Date& d)
{
	// 修改：非法日期时循环重新输入，直到合法为止
	while (true)
	{
		cout << "请依次输入年月日" << endl;
		in >> d._year >> d._month >> d._day;
		if (d.DateCheck())
		{
			break;
		}
		cout << "日期违法，请重新输入" << endl;
	}
	return in;
}