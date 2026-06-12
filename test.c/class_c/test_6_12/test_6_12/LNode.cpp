#define _CRT_SECURE_NO_WARNINGS
#include"LNode.h"
LNode* BuyListNode(int data)
{
	LNode* NewNode = (LNode*)malloc(sizeof(LNode));//ÎªÁ´±íÉêÇë¿Õ¼ä
	if (NewNode== NULL)
	{
		printf("ÉêÇë¿Õ¼äÊ§°Ü\n");
		exit(-1);
	}
	NewNode->data = data;
	NewNode->next = NULL;
	return NewNode;
}
void PrintListNode(LNode* L)
{
	LNode* cur = L->next;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
	printf("\n");
}
LNode* middleNode(LNode* L)
{
	LNode* fast = L->next;
	LNode* slow = L->next;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;

}