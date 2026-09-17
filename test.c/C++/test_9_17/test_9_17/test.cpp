#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date()   //无参构造函数
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//	//全缺省构造函数
//	/*Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	//含参构造函数
//	Date(int year, int month, int day)
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
//	Date d1; //对象实例化自动调用
//	Date d2(2026, 9, 17);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//int main()
//{
//	Date d1;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//private:
//		int _year;
//	int _month;
//	int _day;
//
//};
//int main()
//{
//	Date d1;
//	return 0;
//}



#include<iostream>
using namespace std;
class Date
{
public:
	Date()    //无参构造函数
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}
	//  全缺省构造函数
	/*Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}*/
	//有参构造函数
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;//调用默认构造函数
	Date d2(2026, 1, 17);//调用带有参数的构造函数

}

