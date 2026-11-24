#define _CRT_SECURE_NO_WARNINGS
#include"vector.h"
#include<iostream>
using namespace std;
void vector_test()
{
	mystd::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
		cout<< endl;
}
void vector_test1()
{
	mystd::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] ;
	}
}
void vector_test2()
{
	mystd::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(7);
	
	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	v1.insert(v1.begin() + 3, 30);
	//v1.insert(v1.begin() + 5, 30);
	mystd::vector<int>::iterator it1=v1.begin()+6;
	v1.insert(it1, 8);        //insert之后it会失效
	while (it1 != v1.end())
	{
		cout << *it1<< " ";
		it1++;
	}
	cout << endl;
}
void vector_test6()
{
	mystd::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	mystd::vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//v1.erase(v1.begin() + 3);
	mystd::vector<int>::iterator it1 = v1.begin();
	while (it1 != v1.end())
	{
		if (*it1 % 2 == 0)
		{
			it1=v1.erase(it1);
			
		}
		else
		it1++;
	}
	mystd::vector<int>::iterator it2 = v1.begin();
	while (it2 != v1.end())
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << endl;
	
}

//void vector_test7()
//{
//	mystd::vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	v1.push_back(6);
//	v1.push_back(7);
//	v1.push_back(8);
//	v1.print();
//}
//template<class T>
//void print(const T& v)
//{
//	for (auto ch : v)
//	{
//		cout << ch;
//	}
//	cout << endl;
//}
template <class T>  //第一种
void print(const mystd::vector<T>& v)
{
	typename mystd::vector<T>::iterator it = v.begin();
	while (it!= v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
template <class Container>   //第二种
void print(const Container& v)
{
    typename Container::const_iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
//void vector_test7()
//{
//	mystd::vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	v1.push_back(6);
//	v1.push_back(7);
//	v1.push_back(8);
//	print(v1);
//}
void vector_test8()
{
	mystd::vector<int> v1;
	v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);
		v1.push_back(6);
		v1.push_back(7);
		v1.push_back(8);
	/*string s1("Hello");
	print(s1);

	print(v1);*/
	//v1. resize(6, 1);
	v1. resize(9, 1);
	print(v1);

}

int main()
{
	///*vector_test7();*/
	//mystd::vector<int> v1;
	//	v1.push_back(1);
	//	v1.push_back(2);
	//	v1.push_back(3);
	//	v1.push_back(4);
	//	v1.push_back(5);
	//	v1.push_back(6);
	//	v1.push_back(7);
	//	v1.push_back(8);
	//	print(v1);
	vector_test8();

	return 0;
}