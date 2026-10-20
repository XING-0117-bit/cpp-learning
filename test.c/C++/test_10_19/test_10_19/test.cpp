#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class B;
//class A
//{
//	friend void func(const A& aa, const B& bb);
//private:
//	int _a1;
//	int _a2;
//};
//class B
//{
//	friend void func(const A& aa, const B& bb);
//private:
//	int _b1;
//	int _b2;
//};
//void func(const A& aa, const B& bb)
//{
//	cout <<aa._a1 << endl;
//}
//int main()
//{
//	A aa;
//	B bb;
//	func(aa, bb);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//	friend class B;   //B是A的友元
//private:
//	int _a1;
//	int _a2;
//};
//class B
//{
//public:
//	void func(const A& aa, const B& bb)
//	{
//		cout << aa._a1 << endl;
//	}
//	
//private:
//	int _b1;
//	int _b2;
//};
//
//int main()
//{
//	A aa;
//	B bb;
//	bb.func(aa, bb);
//	return 0;
//}
#include<iostream>
using namespace std;
class A
{
public:
	class B                  //B默认就是A的友元函数
	{
	public:
		void func(const A&aa)
		{
			cout << _b1 << endl;
			cout << aa._a1 << endl;
		}
	private:
		int _b1=2;
		int _b2;
	};
private:
	int _a1=1;
	int _a2;


};
int main()
{
	A::B b;
	A aa;
	b.func(aa);
	return 0;
}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	class B                  //B默认就是A的友元函数
//	{
//	public:
//		void func(const A&aa)
//		{
//			cout << _b1 << endl;
//			cout << aa._a1 << endl;
//		}
//	private:
//		int _b1=2;
//		int _b2;
//	};
//private:
//	int _a1=1;
//	int _a2;
//
//
//};
//int main()
//{
//	A::B b;
//	A aa;
//	b.func(aa);
//	return 0;
//}
class Solution
{
	class Sum
	{
	public:
		Sum()
		{
			_ret += _i;
			_i++;
		}
	};
	static int _i;
	static int _ret;
public:
	int Sum_Solution(int n)
	{
		Sum arr[n];
		return _ret;
	}
};
int Solution::_i = 1;
int Solution::_ret = 1;