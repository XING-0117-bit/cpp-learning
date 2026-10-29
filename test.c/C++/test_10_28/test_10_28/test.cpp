#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//	template <typename T>
//	T Add(const T& x, const T& y)
//	{
//		return x + y;
//	}
//
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	double z = 2.3;
//	double b = 2.5;
//	cout << Add(x, y) << endl; //这种是类型相同的变量调用Add这个函数，是合理的
//
//	cout << Add((double)x, z) << endl;
//	cout << Add(x, (int)z) << endl;     //这两种方式都是可以的
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//template <typename T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	double z = 2.3;
//	double b = 2.5;
//	cout << Add<int>(x, z) << endl; //这种方式就是显示类型转换
//	return 0;
//}
#include<iostream>
using namespace std;
//int Add( int x,int y)
//{
//	cout << "Add( int x,int y)" << endl;
//	return x + y;
//}
//template <typename T>
//T Add( T x,  T y)
//{
//	cout << "T Add( T x,  T y)" << endl;
//	return x + y;
//}
//int main()
//{
//	Add(1, 2); 
//	cout << Add(1, 1.2) << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
// 类模版
template<typename T>
class Stack
{
public:
	Stack(size_t capacity = 4)
	{
		_array = new T[capacity];
		_capacity = capacity;
		_size = 0;
	}
	void Push(const T& data);
private:
	T* _array;
	size_t _capacity;
	size_t _size;
};
// 模版不建议声明和定义分离到两个文件.h 和.cpp会出现链接错误，具体原因后面会讲
template<class T>
void Stack<T>::Push(const T& data)

{
	// 扩容
	_array[_size] = data;
	++_size;
}
int main()
{
	Stack<int> st1; // int
	Stack<double> st2; // double
	return 0;
}
//Stack是类名，Satck<int>才是真正的类型
Stack<int> st1;   //int类型
Stack<double> st2; //double类型