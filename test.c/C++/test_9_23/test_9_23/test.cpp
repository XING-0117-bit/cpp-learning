#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2026,1, 17);
//	Date d2(2026, 3, 25);
//	cout<<(d1 = d2)<<endl;
//	return 0;
//}
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
	bool operator==(Date& d)
	{
		return _year == d._year &&
			_month == d._month &&
			_day == d._day;

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
	cout<<d1.operator==(d2)<<endl;
	return 0;
}

