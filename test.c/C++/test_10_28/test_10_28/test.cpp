#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//void Swape(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swape(double& x, double& y)
//{                                   //在C语言中我们要实现不同类型的交换函数必须得写出不同的函数
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swape(char& x, char& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	return 0;
//}
template<typename T>
void Swape(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int x = 1;
	int y = 2;
	double z = 1.1;
	double d = 3.3;
	Swape(x, y);
	Swape(z, d);
	cout << "x="<<x<<endl<<"y="<<y << endl;
	cout << "z="<<z<<endl<<"d="<<d << endl;
	return 0;

}