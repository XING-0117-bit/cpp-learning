#define _CRT_SECURE_NO_WARNINGS
#include"string.h"
void test()
{
	mystd::string s1 = "Hello";
	s1.append("xxxxxxx");
	cout << s1.c_str()<<endl;
}
int main()
{
	////std::string s1;
	////cout << s1.c_str()<< endl;  //标准库中的string

	////mystd::string s2;
	////cout << s2.c_str() << endl;//我们自己实现的string 无参数构造


	//mystd::string s3 = "Hello World";  //有参数构造
	//	//cout << s3.c_str() << endl;

	//	//for (size_t i = 0; i < s3.size(); i++)   //常用的遍历方式
	//	//{
	//	//	cout << s3[i] <<"|";
	//	//}
	//	mystd::iterator it = s3.begin(); //迭代器实现不加const版本
	//	while (it != s3.end())
	//	{
	//		*it='x';       //指针所指向的内容是可以改变的
	//		cout << *it << "%";
	//		it++;
	//	}
	//	mystd::const_iterator it = s3.begin();
	//		while (it != s3.end())
	//	{
	//			it++;  //指针可以改变 但是指针所指向的内容是不能改变的
	//			cout << *it << endl;
	//	}
	//	for (auto& ch : s3)    //范围for实现不加const版本
	//	{
	//		ch--;
	//		cout << ch << "*";
	//		
	//	}
	test();
		
}