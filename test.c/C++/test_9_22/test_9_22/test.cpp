#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(Date d)
//	{
//		_year = d.year;
//		_month = d.month;
//		_day = d.day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2026, 1, 17);
//	Date d2(d1);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2026, 1, 17);
//	Date d2(d1);
//	d1.Print();
//	d2.Print();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//
//		_capacity = n;
//		_top = 0;
//	}
//	void push(stdatatype x)
//{
//	if (_top == _capacity)
//	{
//		int newcapacity = _capacity * 2;
//		stdatatype* tmp = (stdatatype*)realloc(_a, newcapacity *
//			sizeof(stdatatype));
//		if (tmp == null)
//		{
//			perror("realloc fail");
//			return;
//		}
//
//		_a = tmp;
//		_capacity = newcapacity;
//	}
//
//	_a[_top++] = x;
//}
//
//
//private:
//		STDataType* _a;
//		size_t _capacity;
//		size_t _top;
//	};
//
//	
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//	// Stack不显⽰实现拷⻉构造，⽤⾃动⽣成的拷⻉构造完成浅拷⻉
//	// 会导致st1和st2⾥⾯的_a指针指向同⼀块资源，析构时会析构两次，程序崩溃
//	/*Stack st2 = st1;*/
//	// MyQueue⾃动⽣成的拷⻉构造，会⾃动调⽤Stack拷⻉构造完成pushst/popst
//	// 的拷⻉，只要Stack拷⻉构造⾃⼰实现了深拷⻉，他就没问题
//	/*MyQueue mq2 = mq1;*/
//	return 0;
//}
//Stack(const Stack& st)
//{
//	// 需要对_a指向资源创建同样⼤的资源再拷⻉值
//	_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//	if (nullptr == _a)
//	{
//		perror("malloc申请空间失败!!!");
//		return;
//	}
//
//	memcpy(_a, st._a, sizeof(STDataType) * st._top);
//
//	_top = st._top;
//	_capacity = st._capacity;
//}
//
//void Push(STDataType x)
//{
//	if (_top == _capacity)
//	{
//		int newcapacity = _capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//			sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//
//		_a = tmp;
//		_capacity = newcapacity;
//	}
//
//	_a[_top++] = x;
//}
//
//
//~Stack()
//{
//	cout << "~Stack()" << endl;
//
//	free(_a);
//	_a = nullptr;
//	_top = _capacity = 0;
//}
//
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//private:
//	Stack pushst;
//	Stack popst;
//};
//#include<iostream>
//#include<cstdlib>
//#include<cstdio>
//using namespace std;
//
//typedef int STDataType;
//
//class Stack
//{
//public:
//    // 构造函数
//    Stack(int n = 4)
//        : _a(nullptr), _capacity(0), _top(0)
//    {
//        _a = (STDataType*)malloc(sizeof(STDataType) * n);
//        if (nullptr == _a)
//        {
//            perror("malloc申请空间失败");
//            exit(-1);
//        }
//        _capacity = n;
//        _top = 0;
//    }
//
//    // 析构函数：释放堆内存
//    ~Stack()
//    {
//        free(_a);
//        _a = nullptr;
//        _capacity = 0;
//        _top = 0;
//    }
//
//    // 注意：这里故意不写拷贝构造和赋值运算符
//    // 用编译器自动生成的浅拷贝，演示 double free 的问题
//
//    // 入栈
//    void Push(STDataType x)
//    {
//        if (_top == _capacity)
//        {
//            int newcapacity = _capacity * 2;
//            STDataType* tmp = (STDataType*)realloc(_a, newcapacity * sizeof(STDataType));
//            if (tmp == nullptr)
//            {
//                perror("realloc fail");
//                return;
//            }
//            _a = tmp;
//            _capacity = newcapacity;
//        }
//        _a[_top++] = x;
//    }
//
//    // 打印
//    void Print() const
//    {
//        cout << "Stack(" << _top << "/" << _capacity << "): ";
//        for (size_t i = 0; i < _top; ++i)
//        {
//            cout << _a[i] << " ";
//        }
//        cout << endl;
//    }
//
//private:
//    STDataType* _a;
//    size_t _capacity;
//    size_t _top;
//};
//
//int main()
//{
//    Stack st1;
//    st1.Push(1);
//    st1.Push(2);
//    st1.Print();
//
//    // 浅拷贝：st1 和 st2 的 _a 指向同一块堆内存
//    // 析构时会 free 两次，程序崩溃
//    Stack st2 = st1;
//    st2.Print();
//
//    return 0;
//}
#include<iostream>
using namespace std;

typedef int STDataType;
class Stack
{
public:
	Stack(int n = 4)
	{
		_a = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		}

		_capacity = n;
		_top = 0;
	}

	Stack(const Stack& st)
	{
		// 需要对_a指向资源创建同样⼤的资源再拷⻉值
		_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败!!!");
			return;
		}

		memcpy(_a, st._a, sizeof(STDataType) * st._top);

		_top = st._top;
		_capacity = st._capacity;
	}

	void Push(STDataType x)
	{
		if (_top == _capacity)
		{
			int newcapacity = _capacity * 2;
			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
				sizeof(STDataType));
			if (tmp == NULL)
			{
				perror("realloc fail");
				return;
			}

			_a = tmp;
			_capacity = newcapacity;
		}

		_a[_top++] = x;
	}


	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};
// 两个Stack实现队列
class MyQueue
{
public:
private:
	Stack pushst;
	Stack popst;
};
int main()
{
	Stack st1;
	st1.Push(1);
	st1.Push(2);
	// Stack不显⽰实现拷⻉构造，⽤⾃动⽣成的拷⻉构造完成浅拷⻉
	// 会导致st1和st2⾥⾯的_a指针指向同⼀块资源，析构时会析构两次，程序崩溃
	Stack st2 = st1;
	MyQueue mq1;
	// MyQueue⾃动⽣成的拷⻉构造，会⾃动调⽤Stack拷⻉构造完成pushst/popst
	// 的拷⻉，只要Stack拷⻉构造⾃⼰实现了深拷⻉，他就没问题
	MyQueue mq2 = mq1;
	return 0;
}