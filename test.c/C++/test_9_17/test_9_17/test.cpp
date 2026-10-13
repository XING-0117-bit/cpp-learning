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



//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date()    //无参构造函数
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//	//  全缺省构造函数
//	/*Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	//有参构造函数
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
//	Date d1();//加括号的话就无法分清是函数声明还是实例化对象
//	Date Func();
//
//}
//

#include<iostream>
using namespace std;

typedef int STDataType;
class Stack
{
public:
	Stack(int n = 4)
	{
		_a = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		}

		_capacity = n;
		_top = 0;
	}
	// ...
private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};

// 两个Stack实现队列
class MyQueue
{
public:
	//编译器默认⽣成MyQueue的构造函数调⽤了Stack的构造，完成了两个成员的初始化
private:
	Stack pushst;
	Stack popst;
};

int main()
{
	MyQueue mq;

	return 0;
}