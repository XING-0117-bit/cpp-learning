#define _CRT_SECURE_NO_WARNINGS
//int i = 0;
//double d = i;  //三者之间可以随意转化，并不会报错
//char ch = i;
//
//int* p = (int*)i; //整型和指针之间也是可以转化的
//
//int* p = (double*)d;
#include<iostream>
using namespace std;
class A
{
public:
	//在构造函数前加上explicit就不会再进行隐式类型转换
	explicit A(int a1)
		:a1(a1)
	{
		cout << "A(int a1)" << endl;
	}
	A(int a1, int a2)
		:a1(a1)
		,a2(a2)
	{
		cout << "A(int a1,int a2)"<<endl;
	}
	/*void Print()
	{
		cout << a1 <<" " << a2 << endl;
	}*/
	A(const A& a1)
	{
		cout << "A(conts A& a1)" << endl;
	}

private:
	int a1=1;
	int a2=2;
};
class Array {
public:
	void PushBack(const A& a) {}
};
int main()
{
	//A aa1(1);    //构造
	//A aa2 = 1;   //构造+拷贝构造->被优化为构造
	//const A& aa3 = 1;
	Array arr;
	// A aar(4);
	//arr.PushBack(aa3);
	//                      //如果用类型转换的话只用写一次就可以，
	//					  // 但是如果是按照正常的写法就需要初始化然后再调用函数
	//arr.PushBack(4);
	A aa5{ 5,5 };       //这是两个整型转换的写法
	const A& aa6{ 6,6 };//当然变成类的引用吗类型也是一样的
	arr.PushBack(aa5);
	arr.PushBack({6,6});
	return 0;
}