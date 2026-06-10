#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
typedef  int LDatatype;
typedef struct Listnode  //定义结构体类型
{                        
	LDatatype data;      //结构体中存放了数据类型
	struct Listnode* next;//后续节点的地址
}Lnode, * Linklist;
Lnode* BuyListnode(int data);
void Print(Lnode* L);
int ListSize(Lnode* L);
Lnode* ListLocateElem(Lnode* L, LDatatype x);
Lnode* ListGetElem(Lnode* L, int i,int n);
void ListInsert(Lnode* L, int i, LDatatype k);
LDatatype Delete(Lnode* L, int i);