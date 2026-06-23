#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//void reorderList(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	struct ListNode* mid = slow->next;
//	slow->next = NULL;
//	struct ListNode* Newhead = NULL;
//	while (mid)
//	{
//		struct ListNode* next1 = mid->next;
//		mid->next = Newhead;
//		Newhead = mid;
//		mid = next1;
//	}
//	struct ListNode* cur1 = head;
//	struct ListNode* curn = Newhead;
//	while (curn)
//	{
//		struct ListNode* Nnext = curn->next;
//		curn->next = cur1->next;
//		cur1->next = curn;
//		cur1 = cur1->next->next;
//		curn = Nnext;
//	}
//}
struct ListNode*middleNode(struct ListNode*head)
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
struct ListNode* reverseList(struct ListNode* cur1)
{
	struct ListNode* Newhead = NULL;
	while (cur1)
	{
		struct ListNode* next = cur1->next;
		cur1->next = Newhead;
		Newhead = cur1;
		cur1 = next;
	}
	return Newhead
}
void reorderList(struct ListNode* head) 
{
	struct ListNode* mid = middleNode(head);
	struct ListNode* cur1 = mid->next;
	mid->next = NULL;
	struct ListNode* Newhead = NULL;
	Newhead = reverseList(cur1);
	struct ListNode*curn = Newhead;
	struct ListNode* cur = head;
	while (curn)
	{
		struct ListNode* Nnext = curn->next;
		curn->next = cur1->next;
		cur1->next = curn;
		cur1 = cur1->next->next;
		curn = Nnext;
	}

}