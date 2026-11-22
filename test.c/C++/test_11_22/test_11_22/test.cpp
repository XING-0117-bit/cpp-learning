#define _CRT_SECURE_NO_WARNINGS
#include"vector.h"
#include<iostream>
using namespace std;
void test_vector1()
{
	mystd::vector<int> v1; //初始化的时候<>中必须要加上类型
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it<<" ";
		it++;
	}

}

void test_vector2()
{
	mystd::vector<int> v1; //初始化的时候<>中必须要加上类型
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	v1.insert(v1.begin()+4, 30);
	mystd::vector<int>::iterator it1 = v1.begin();
	while (it1 != v1.end())
	{
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;

}
void test_vector3()
{
	mystd::vector<int> v1; //初始化的时候<>中必须要加上类型
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	

	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	mystd::vector<int>::iterator it1 = v1.begin();
	while (it1 != v1.end())
	{
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;
}
void test_vector4()
{
	mystd::vector<int> v1; //初始化的时候<>中必须要加上类型
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	v1.erase(v1.begin()+3);
	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

int main()
{
	test_vector4();
	return 0;
}