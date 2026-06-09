#define _CRT_SECURE_NO_WARNINGS
#include"List.h"
Lnode* CreatList()
{
	Lnode* L = BuyListnode(-1);
	Lnode*node1 = BuyListnode(1);
	Lnode*node2 = BuyListnode(2);
	Lnode*node3 = BuyListnode(3);
	Lnode*node4 = BuyListnode(4);
	L->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	return L;
}
void Test()
{
	Lnode* LT = NULL;
	LT=CreatList();
	Print(LT);
	int n = ListSize(LT);
	//printf("%d\n", n);
	Lnode*r=ListLocateElem(LT, 3);//找到链表中和x一样的结点的地址
	//printf("%p", r);
	Lnode*w=ListGetElem(LT, 2,n);
	//printf("%d", w->data);
	ListInsert(LT, 2, 3);
	Print(LT);

}
int main()
{
	Test();
}