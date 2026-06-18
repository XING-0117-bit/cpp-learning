#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
typedef int LDataType;
typedef struct ListNode
{
	LDataType val;
	struct ListNode* next=NULL;
}LNode;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* tail = NULL;
//	while (head)
//	{
//		struct ListNode* cur = head->next;
//		head->next = tail;
//		tail = head;
//		head=cur;
//		
//	}
//	return tail;
//}
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//	if (list1 == NULL)
//		return list2;
//	else
//		return list1;
//	struct ListNode* head = NULL;
//	struct ListNode* tail = NULL;
//	if (list1->val < list2->val)
//	{
//		if (tail == NULL)
//		{
//			tail = head = list1;
//		}
//		else
//		{
//			tail->next = list1;
//			tail = tail->next;
//		}
//	}
//	else
//	{
//		if (tail == NULL)
//		{
//			tail = head = list2;
//		}
//		else
//		{
//			tail->next = list2;
//			tail = tail->next;
//		}
//	}
//	if (list1)
//	{
//		tail->next = list1;
//	}
//	if (list2)
//	{
//		tail->next = list2;
//	}
//	return head;
//}
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
	int i = 0;
	int j = 0;
	int k = 0;
	struct ListNode* curA = headA;
	struct ListNode* curB = headB;
	while (headA)
	{
		headA = headA->next;
		i ++;
	}
	while (headB)
	{
		headB = headB->next;
		j++;
	}
	if (headA != headB)
	{
		return NULL;
	}
	headA = curA;
	headB = curB;
	if (i > j)
	{
		for (k = i - j; k != 0; k--)
		{
			headA = headA->next;
		}
	}
	else
	{
		for (k = j - i; k != 0; k--)
		{
			headB = headB->next;
		}
	}
	while(headA==headB)
	{ 

	}




int main()
{
	return 0;
}