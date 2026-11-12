#define _CRT_SECURE_NO_WARNINGS
#include"string.h"
void test()
{
	//mystd::string s1 = "Hello";
	//s1.append("xxxxxxx");
	/*s1.push_back('x');
	s1 += "&&&";
	s1 += 't';*/
	/*mystd::string s2 = "&&&";
	mystd::string s3 = s1 + "%%%";
	mystd::string s4 = s1 + s2;*/
	/*cout << s1.c_str()<<endl;
	cout << s3.c_str()<<endl;
	cout << s4.c_str()<<endl;*/
	//mystd::string s5="*******%%%%%%";
	mystd::string s6="Hello world";
	mystd::string s7="abcdefghigklmn";
	mystd::string s8="def";
	//s2.insert(2, '*');
	//s2.insert(2, "******");
	//s5.insert(0, '%');
	//s5.insert(0, "%%%%%");
	//s5.erase(1, 3);
	/*s5.erase(1,3);
	s6.erase(6,2);*/
	/*size_t f=s6.find('o', 3);
	cout << f << endl;
	size_t found=s7.find("def", 0);
	cout << found << endl;*/
	mystd::string found=s7.substr(3, 4);
	cout << found.c_str()<< endl;
	//cout << s2.c_str() << endl;
	/*cout << s5.c_str()<< endl;
	cout << s6.c_str()<< endl;*/
}
int main()
{
	//////std::string s1;
	//////cout << s1.c_str()<< endl;  //标准库中的string

	//////mystd::string s2;
	//////cout << s2.c_str() << endl;//我们自己实现的string 无参数构造


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
	//	cout << endl;
	//	mystd::const_iterator it1 = s3.begin();
	//		while (it1 != s3.end())
	//	{
	//			it1++;  //指针可以改变 但是指针所指向的内容是不能改变的
	//			cout << *it1 << '@';
	//	}
	//		cout << endl;
	//	for (auto& ch : s3)    //范围for实现不加const版本
	//	{
	//		ch--;
	//		cout << ch << "*";
	//		
	//	}
	test();
		
}