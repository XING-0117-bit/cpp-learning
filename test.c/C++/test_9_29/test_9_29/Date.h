//Date.h
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Date
	{
	// 新增：流运算符声明为友元，才能访问 Date 的私有成员
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in,  Date& d);
public:
	Date(int year = 1, int month = 1, int day = 1);
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	bool DateCheck();  // 新增：日期合法性校验
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;  // 修改：operator- 用到 !=，补上该运算符
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator<(const Date& d) const;

	Date& operator+=(int day);
	Date operator+(int day);

	Date& operator-=(int day);
	Date operator-(int day);

	int  operator-(const Date& d)const;

	Date operator++();
	Date operator++(int day);
private:
	int _year;
	int _month;
	int _day;
};
// 新增：声明全局 operator>>（operator<< 已用类内友元声明，无需再声明）
//ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);