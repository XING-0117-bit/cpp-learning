//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int STTop(ST& rs)
//{
//	assert(rs.top > 0);
//	return rs.a[rs.top];
//}
//int main()
//{
//	ST st1;
//	STInit(st1);
//	STPush(st1, 1);
//	STPush(st1, 2);
//
//	STTop(st1) += 10;
//	cout << STTop(st1) << endl;
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int& STTop(ST& rs)
//{
//	assert(rs.top > 0);
//	return rs.a[rs.top];
//}
//int main()
//{
//	ST st1;
//	STInit(st1);
//	STPush(st1, 1);
//	STPush(st1, 2);
//
//	STTop(st1) += 10;
//	cout << STTop(st1) << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//typedef struct SeqList
//{
//	int a[10];
//	int size;
//}SLT;
//// ⼀些主要⽤C代码实现版本数据结构教材中，使⽤C++引⽤替代指针传参，⽬的是简化程序，避开复
////杂的指针。
//void SeqPushBack(SLT & sl, int x)
//{}
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode, * PNode;
//// 指针变量也可以取别名，这⾥LTNode*& phead就是给指针变量取别名
//// 这样就不需要⽤⼆级指针了，相对⽽⾔简化了程序
////void ListPushBack(LTNode** phead, int x)
////void ListPushBack(LTNode*& phead, int x)
//void ListPushBack(PNode& phead, int x)
//{
//	PNode newnode = (PNode)malloc(sizeof(LTNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (phead == NULL)
//	{
//		phead = newnode;
//	}
//	else
//	{
//		//...
//	}
//}
//int main()
//{
//	PNode plist = NULL;
//	ListPushBack(plist, 1);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int& Add(int x, int y)
//{
//	int a = 0;
//	a = x + y;
//	return a;
//}
//int main()
//{
//	int a = Add(1, 2);
//	cout << a << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int& Add(int x, int y)
{
	int a = 0;
	a = x + y;
	return a;
}
int main()
{
	int&a = Add(1, 2);
	cout << a << endl;
	cout << a << endl;
	cout << a << endl;
	Add(1, 5);//在这里只是换了参数，并没有改动a的值，我们可以发现a的值会自动变化
	cout << a << endl;
	return 0;
}