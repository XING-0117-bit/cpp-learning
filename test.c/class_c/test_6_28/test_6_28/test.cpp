#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
//typedef struct ListNode
//{
//	int data;
//	struct ListNode* next;
//}LNode;
//LNode* BuyListNode(int data)
//{
//	LNode* head = (LNode*)malloc(sizeof(LNode));
//	if (head == NULL)
//	{
//		printf("申请空间失败\n");
//		exit(-1);
//	}
//	head->data = data;
//	head->next = NULL;
//	return head;
//}
//LNode* ListInit(int n)
//{
//	if (n <= 0)
//		return NULL;
//	LNode* L = NULL;
//	LNode* tail = NULL;
//	LNode* head = NULL;
//	LNode* NewNode = NULL;
//	int x = 0;
//	scanf("%d", &x);
//	head = BuyListNode(x);
//	L = tail = head;
//	for (int j = 1; j < n; j++)
//	{
//		scanf("%d", &x);
//		NewNode = BuyListNode(x);
//		tail->next = NewNode;
//		tail=NewNode;
//	}
//	return L;
//}
//void Print(LNode* L)
//{
//	if (L == NULL)
//	{
//		printf("链表为空");
//	}
//	while (L)
//	{
//		printf("%d ", L->data);
//		L = L->next;
//	}
//	printf("\n");
//	
//}
//LNode* Listdetele(LNode*L,int d)
//{
//	if (L!=NULL&& L->data == d)
//	{
//		LNode* tmp = L;
//		L = L->next;
//		free(tmp);
//		tmp = NULL;
//	}
//	if (L == NULL)
//	{
//		return NULL;
//	}
//	LNode* prev = L;
//	LNode* next = L->next;
//	while (next)
//	{
//		if (next->data == d)
//		{
//			LNode* Nnext = next->next;
//			prev->next = next->next;
//			free(next);
//			next = Nnext;
//		}
//		else
//		{
//			prev = next;
//		next = next->next;
//		}
//	}
//	return L;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	LNode* L = ListInit(n);
//	//Print(L);
//	int d = 0;
//	scanf("%d", &d);
//	L=Listdetele(L, d);
//	Print(L);
//	return 0;
//}
typedef struct ListNode
{
	int date;
	struct ListNode* next;
}LNode;
LNode* BuyListNode(int n)
{
	LNode* head = (LNode*)malloc(sizeof(LNode));
	if (head == NULL)
	{
		printf("申请空间失败\n");
		exit(-1);
	}
	head->date = n;
	head->next = NULL;
	return head;
}
LNode* ListInit(int n)
{
	LNode* Newnode = BuyListNode(1);
	LNode* head = NULL;
	LNode* tail = NULL;
	head = tail = Newnode;
	for (int i = 2; i <=n; i++)
	{
		LNode* node = BuyListNode(i);
		tail->next = node;
		tail = node;
	}
	tail->next = head;
	return head;
}
void Print(LNode* L)
{
	LNode* cur = L;
	while (cur->next!=L)
	{
		printf("%d", cur->date);
		cur= cur->next;
	}
	printf("%d", cur->date);
}
LNode* Listdetele(LNode* L, int m)
{
	assert(L);
	LNode* prev = L;
	LNode* cur = L;
	while (prev->next != L)
	{
		prev = prev->next;
	}
	while(prev!=cur)
	{
		int j = 1;
		for(j = 1; j < m; j++)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
		free(cur);
		cur = prev->next;
	}
	return cur;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n,&m);
	LNode* L = ListInit(n);
	Print(L);
	LNode*x=Listdetele(L, m);
	printf("%d", x->date);
	return 0;
}