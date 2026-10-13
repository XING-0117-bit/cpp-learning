//test.cpp
#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
using namespace std;
int main()
{
	 //新增：之前的运算符测试整体注释保留，本次只测 >> 和 <<
	Date d1(2026, 1, 17);
	Date d2(2026, 3, 25);
	cout<<(d1==d2)<<endl;
	cout << (d1 > d2)<< endl;
	cout << (d1 >= d2)<< endl;
	cout << (d1 <= d2)<< endl;
	cout << (d1 < d2)<< endl;
	Date d3 = d2 + 100;
	Date d4 = d1 - 100;

	int n = d2 - d1;
	d3.Print();
	d4.Print();
	cout << n << endl;
	cin >> d1 >> d2;
	cout << d1 << d2;
	// 新增：用 operator>> 输入，operator<< 输出
	//Date d1;
	//cin >> d1;
	//cout << d1;  // 修改：补充 operator<< 输出验证

	return 0;
}