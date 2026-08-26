#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//struct istream
//{
//	int x;
//};
//int main()
//{
//	cout << "Hello C++" << endl;
//	istream ism;
//	return 0;
//}
//#include<iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << "Hello C++" << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void Func(int a = 9)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();
//	Func(10);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void Func2(int a,int b=10,int c=20)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	//Func2(10);
//	Func2(10,20);
//	return 0;
//}
#include"Stack.h"
int main()
{
	ST s1;
	STInit(&s1);
	
		// 确定知道要插⼊1000个数据，初始化时⼀把开好，避免扩容
		ST s2;
	STInit(&s2, 1000);
	return 0;
}