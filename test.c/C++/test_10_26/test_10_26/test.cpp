#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//void Test()
//{
//	//动态申请一个int类型的空间
//	int* ptr4 = new int;
//
//	//动态申请一个int类型的空间并且初始化为10
//	int* ptr5 = new int(10);
//
//	//动态申请十个int类型的空间
//	int* ptr6 = new int[10];
//
//
//	delete ptr4;
//	delete ptr5;
//	delete []ptr6;
//}
#include<iostream>
using namespace std;
class A
{
public:
	 A(int a=0)
		 :_a(a)
	{
		 cout << "A()" << endl;
	}
	 ~A()
	 {
		 cout << "~A()" << endl;
	 }
private:
	int _a;
};
int main()
{
	// new/delete和malloc/free最大的区别就是：new/detele不止可以申请新的空间，
	// 而且会自动调用构造和析构函数
	A* p1 = (A*)malloc(sizeof(A));
	A* p2 = new A(1);
	free(p1);      //new/detele和malloc/free的搭配是固定的，不能随意更换
	delete(p2);



	int* p4 = (int*)malloc(sizeof(int));
	int* p5 = new int;
	free(p4);
	detele p5;
}