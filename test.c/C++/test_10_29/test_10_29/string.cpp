#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void test_string1()
{
	string s1;
	string s2("Hello world");
	string s3(s2);
	string s4 = s2;
	string s5("C++入门");
}
void test_string2()
{
	string s1("Hello world***********");//创建字符串
	string s2(s1, 6, 3); //从下标为6的字符开始，留下三个字符
	string s3(s1, 6, s1.size() - 6); //从下标为6的字符开始，一直到结束
	string s4(s1, 6, 10000);//超出整个字符串的长度也不会报错，会一直到最后一个字符
	string s5(s1, 6);    //即使不写第三个参数也是有默认值的，还是从下标为6的字符开始一直到结束
	string s7("Hello world***********",7);//从开头取n个字符
	string s8(10, '*'); //构造长度为10的由'*'组成的字符串
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s7 << endl;
	cout << s8 << endl;
}
void test_string3()
{
	string s1 = "Hello world*********";
	string s2 = s1;//赋值拷贝
	string s3;
	s3 = "hello";  //接收字符数组
	string s4;
	s4 = 'x';  //单字符赋值
}
void test_string4()
{
	string s1 = "12345";
	s1[0]++;          //将下标为0的字符加1
	s1[2] = '4';     //将下标为2的字符替换成'4'
	cout << s1 << endl;
	//cout << s1[20] << endl;  //越界报错

	 s1 += "******";     //给字符串在加上一串字符
	 cout << s1 << endl;

	char arr[] = "12345";
	arr[0]++;                 //用数组来实现以上操作
	cout << arr[0] << endl;
	//cout << arr[20] << endl;  //越界不报错
}
int main()
{
	test_string4();
	return 0;
}