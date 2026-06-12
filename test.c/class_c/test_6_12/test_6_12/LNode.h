#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int LDataType;
typedef struct ListNode
{
	LDataType data;      //存储数据
		struct ListNode* next;   //存放下一个节点的地址
}LNode, * LinkList;
LNode* BuyListNode(int data);
void PrintListNode(LNode* L);
LNode* middleNode(LNode* L);