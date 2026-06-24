#pragma once
#include"DCList.h"
DCListNode* BuyDCListNode(int data)
{
	DCListNode* Newnode = (DCListNode*)malloc(sizeof(DCListNode));
	if (Newnode == NULL)
	{
		printf("申请空间失败");
			exit(-1);
	}
	Newnode->data = data;
	Newnode->next = NULL;
	Newnode->prev = NULL;
	return Newnode;
}
void DCListPrint(DCListNode* L)
{
	assert(L);
	DCListNode* cur = L->next;
	while (cur != L)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
DCListNode* DCListInit()
{
	DCListNode*L = BuyDCListNode(-1);
	L->next = L;
	L->prev = L;
	return L;
}
void DCListDestroy(DCListNode* L)
{
	assert(L);
	DCListNode* cur = L->next;
	while (cur != L)
	{
		DCListNode* next = cur->next;
		cur->next = NULL;
		free(cur);
		cur = next;
	}
	free(L);

}
DCListNode* DCListGetElem(DCListNode* L, int i)
{
	assert(L);
	int j = 0;
	DCListNode* cur = L->next;
	while (cur != L && j < i)
	{
		cur = cur->next;
		j++;
	}
	assert(i == j);
	return cur;
}
void DCListInsert(DCListNode* pos, DCLDataType x)
{
	
	DCListNode* Newnode = BuyDCListNode(x);
	Newnode->next = pos->next;
	Newnode->next->prev = Newnode;
	pos->next = Newnode;
	Newnode->prev = pos;

}
void DCListDelete(DCListNode* pos)
{
	assert(pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
}
void DCListPushFront(DCListNode* L, DCLDataType x)
{
	DCListInsert(L, x);
}
void DCListPushBack(DCListNode* L, DCLDataType x)
{
	DCListInsert(L->prev, x);
}
void DCListPopBack(DCListNode* L)
{
	assert(L);
	DCListDelete(L->prev);

}
void DCListPopFront(DCListNode* L)
{
	assert(L);
	DCListDelete(L->next);

}

