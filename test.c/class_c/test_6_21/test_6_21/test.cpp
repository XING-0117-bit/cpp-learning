#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* Newhead = NULL;
//	
//	while (head)
//	{
//		struct ListNode* cur = head->next;
//		head->next = Newhead;
//		Newhead = head;
//		head = cur;
//	}
//	return Newhead;
//
//}
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
//{
//	struct ListNode* Newhead = NULL;
//	struct ListNode* tail = NULL;
//	if (list1)
//		return list2;
//	if (list2)
//		return list1;
//	while (list1 && list2)
//	{
//		if (list1->val > list2->val)
//		{
//			if (Newhead == NULL)
//			{
//				list2 = Newhead = tail;
//				list2 = list2->next;
//			}
//			else
//			{
//				Newhead->next = list2;
//				list2 = Newhead;
//				list2 = list2->next;
//			}
//		}
//		else
//		{
//			if (Newhead == NULL)
//			{
//				list1 = Newhead = tail;
//				list1 = list1->next;
//			}
//			else
//			{
//				Newhead->next = list1;
//				list1 = Newhead;
//				list1 = list1->next;
//			}
//		}
//
//	}
//	return Newhead;
//}
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
	int n = 0;
	int j = 0;
	struct ListNode* cur1 = headA;
	struct ListNode* cur2 = headB;
	while (headA)
	{
		headA = headA->next;
		n++;
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
	headA = cur1;
	headB = cur2;
	
		if (n > j)
		{
			for (int i = 0; i < n - j; i++)
			{
				headA = headA->next;
			}
		}
		else
		{
			for (int i = 0; i < j - n; i++)
			{
				headB = headB->next;
			}
		}
		while (headA && headB)
		{
			if (headA == headB)
			{
				break;
			}
			else
			{
				headA = headA->next;
				headB = headB->next;
			}
	}
	return headA;
}