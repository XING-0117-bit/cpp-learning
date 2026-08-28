#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	//这里b、c都是a的别名
//	int& d = b;
//	//这里d就是b的别名，又因为b又是a的别名所以d也是a的别名
//	++d;
//	cout << &d << endl;
//	cout << &a<< endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int b = 10;
//	int& a = b;//这是正确的，引用必须要在定义的时候初始化
//	int& ra;  //像这种写法就是不正确的，就会报错
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c= a;
//	int& d = a;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int& c = b;
//	c = a;
//	cout << c << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void Swape(int* x, int* y)
//{
//	int b = *x;
//	*x = *y;
//	*y = b;
//}
//int main()
//{
//	int a = 10;
//	int b = 9;
//	Swape(&a,&b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
void Swape(int&x, int&y)
{
	int b = x;
	x = y;
	y = b;
}
int main()
{
	int a = 10;
	int b = 9;
	Swape(a, b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}