#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
inline int Add(int x, int y)//inline函数
{
	return x + y;
}
int main()
{
	int ret = Add(3, 4);
	cout << ret << endl;
	return 0;
}


#include<iostream>
using namespace std;
void f(int x)
{
	cout << "f(int x)" << endl;
}
void f(int* ptr)
{
	cout << "f(int* ptr)" << endl;
}
int main()
{
	f(0);
	// 本想通过f(NULL)调⽤指针版本的f(int*)函数，但是由于NULL被定义成0，调⽤了f(int
	//x)，因此与程序的初衷相悖。
	f(NULL);
	f((int*)NULL);
		// 编译报错：error C2665: “f”: 2 个重载中没有⼀个可以转换所有参数类型
		// f((void*)NULL);
		f(nullptr);
	return 0;
}