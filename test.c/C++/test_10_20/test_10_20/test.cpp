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
	int Sum_Solution(int n)
	{
		return n;            //如果说就是单纯调用一下这个对象那就可以用匿名对象
	}
};
int main()
{
	A aa;  //有名对象
	A();   //匿名对象

	Solution S;
	S.Sum_Solution(9);     //正常调用应该这样调用

	Solution().Sum_Solution(9);  //有了匿名函数就可以这样调用，匿名对象的特点
	                             //不用取名字
}