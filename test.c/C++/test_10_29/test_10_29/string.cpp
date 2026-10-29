#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void teststring()
{
	string s1;
	string s2("Hello world");
	string s3(s2);
	string s4 = s2;
	string s5("C++入门");
}
int main()
{
	teststring();
	return 0;
}