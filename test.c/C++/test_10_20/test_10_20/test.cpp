#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class A
{
public:
	A(int a=0)
		:_a(a)
	{
		cout << "A(int a=0)" << endl;
	}
private:
	int _a;
};
class Solution
{
public:
	Solution(int n )
	{
		return n;
	}
}
int main()
{
	A aa;  //有名对象
	A();   //匿名对象
}