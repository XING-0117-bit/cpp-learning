#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Data
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
		cout << _year << "/" << _month << "/" << _day  << endl;
	}
private:     
	// 这里只是声明，没有开辟任何空间
	int _year;
	int _month;
	int _day;

};
int main()
{
	Data d1;   //d1 d2就是实例化出的对象
	Data d2;
	d1.Init(2026, 9, 10);
	d1.Print();
	d2.Init(2026, 10, 1);
	d2.Print();
	return 0;
}