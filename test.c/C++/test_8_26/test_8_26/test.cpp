#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int Add(int left, int right)
//{
//	//cout << "Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	//cout << "Add(double left,double right)" << endl;
//	return left + right;
//}
//int main()
//{
//	Add(10, 5);
//	Add(10.5, 3.2);
//	cout << Add(10, 5)<< endl;
//	cout << Add(10.5, 3.2) << endl;
//	return 0;
//}
//void f1()
//{
//	cout << "f1()" << endl;
//}
//void f1(int a)
//{
//	cout << "f2(int a)" << endl;
//}
//int main()
//{
//	f1();
//	f1(2);
//	return 0;
//}
void f1(char a, int b)
{
	cout << "f1(char a,int b)" << endl;
}
void f1(int a, char b)
{
	cout << "f1(int a,char b)"<<endl;
}
int main()
{
	f1('x', 1);
	f1(1, 'x');
	return 0;
}
