#define _CRT_SECURE_NO_WARNINGS
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
	//编译器默认⽣成MyQueue的析构函数调⽤了Stack的析构，释放的Stack内部的资源

		// 显⽰写析构，也会⾃动调⽤Stack的析构
		/*~MyQueue()
		{}*/
private:
	Stack pushst;
	Stack popst;
};

int main()
{
	Stack st;

	MyQueue mq;
	return 0;
}