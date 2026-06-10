#define _CRT_SECURE_NO_WARNINGS
#include"List.h"
Lnode* BuyListnode(int data)
{
	Lnode* Newnode = (Lnode*)malloc(sizeof(Lnode));
	if (Newnode == NULL)
	{
		printf("申请空间错误\n");
		exit(-1);
	}
	Newnode->data=data;
	Newnode->next=NULL;
	return Newnode;
}
void Print(Lnode* L)
{
	assert(L);
	Lnode* cur = L->next;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	if (cur == NULL)
	{
		printf("NULL");
	}
	printf("\n");
}
int ListSize(Lnode* L)
{
	assert(L);
	int n = 0;
	Lnode* cur = L->next;
	while (cur)
	{
		cur = cur->next;
		n++;
	}
	return n;
}
Lnode* ListLocateElem(Lnode* L, LDatatype x)
{
	assert(L);
	Lnode* cur = L->next;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
Lnode* ListGetElem(Lnode* L, int i,int n)
{
	assert(L);
	assert(i >= 0);
	Lnode* inode = L->next;
	for (int j = 0; j < i; j++)
	{
		inode=inode->next;
	}
	if (inode == NULL)
	{
		printf("没有找到下标为i的结点\n");
		return NULL;
	}
	return inode;
}
void ListInsert(Lnode* L, int i, LDatatype x)
{
	assert(L);
	assert(i >= 0);
	Lnode* i_1node = L;
	int j = -1;
	while (j < i - 1 && i_1node)
	{
		i_1node = i_1node->next;
		j++;
	}
	assert(i_1node);
	Lnode* Newnode = BuyListnode(x);
    Newnode->next = i_1node->next;
	i_1node->next = Newnode;
}
//void ListInsert(Lnode* L, int i, LDatatype x)
//{
//	assert(L);
//	assert(i >= 0);
//	Lnode* i_1node = L->next;
//	int j = -1;
//	while (j < i - 1 && i_1node)
//	{
//		i_1node = i_1node->next;
//		j++;
//	}
//	assert(i_1node);
//	Lnode* Newnode = BuyListnode(x);
//	Newnode->next=i_1node->next;
//	i_1node->next = Newnode;
//	
//}
LDatatype Delete(Lnode* L, int i)
{
	assert(L);
	assert(i >= 0);
	Lnode* i_1node = L;
	int j = -1;
	while (j < i - 1 && i_1node)
	{
		i_1node = i_1node->next;
		j++;
	}
	assert(i_1node);
	Lnode* Newnode = i_1node->next;
	i_1node->next = Newnode->next;
	return Newnode->data;
	free(Newnode);
	Newnode = NULL;
}