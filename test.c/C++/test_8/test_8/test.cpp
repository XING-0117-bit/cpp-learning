#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//void f2()
//{
//	cout << "f2()" << endl;
//}
//int f2()
//{
//	return 8;
//}
using namespace std;
//int main()
//{
//	f2();
//	f2();
//	return 0;
//}
using namespace std;
void f3()
{
	cout << "f3()" << endl;

}
void f3(int a = 10)
{
	cout << "f3()" << endl;
}
int main()
{
	f3(1);
	f3();//调用歧义
	return 0;
}