#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class A
{
public:
	A(int a1)
		:_a(a1)
	{
		count++;
	}
	A(const A& aa1)
		:_a(aa1._a)
	{
		count++;
	}
	static int Getcount()
	{
		return count;
	}
private:
	int _a;
	static int count=4;
};
//int A::count = 0;
int main()
{
	A aa1(1);
	A aa2 = 1;
	cout << A::Getcount()<< endl;
	cout << aa1.Getcount()<< endl;  //用两种方式都可以调用，但是用类来调用的情况会稍微多一点
	return 0;
}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a1)
//		:_a(a1)
//	{
//		count++;
//	}
//	A(const A& aa1)
//		:_a(aa1._a)
//	{
//		count++;
//	}
// int Getcount()
//	{
//		return count;
//	}
//private:
//	int _a;
//	static int count;
//};
//int A::count = 0;
//int main()
//{
//	A aa1(1);
//	A aa2 = 1;
//	cout << aa1.Getcount() << endl;
//	return 0;
//}
//
