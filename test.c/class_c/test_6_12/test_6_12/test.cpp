#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//ListNode* middleNode(ListNode* head) 
//{
//	ListNode* fast = head;
//	ListNode* slow = head;
//	while (fast&&fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//int kthToLast(ListNode* head, int k)
//{
//	ListNode* fast = head;
//	ListNode* slow = head;
//	while(k)
//	{
//		fast = fast->next;
//		k--;
//	}
//	while (fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//ListNode* removeElements(ListNode* head, int val) 
//{
//	ListNode* pre = head;
//	ListNode* cur = head->next;
//	while (cur)
//	{
//		if (cur ->val == val)
//		{
//			if (pre == NULL)
//			{
//				ListNode* NewNode = cur->next;
//				head->next = cur->next;
//				free(cur);
//				cur = NewNode;
//			}
//			else
//			{
//				ListNode* NewNode = cur->next;
//				pre->next = cur->next;
//				free(cur);
//				cur = Newnode;
//			}
//		}
//		else
//		{
//			pre++;
//			cur++;
//		}
//	}
//	return head;
//}
#include<stdio.h>
#include"LNode.h"
LNode *CreatListNode()
{
	LNode* L = BuyListNode(-1);
	LNode* node1 = BuyListNode(1);
	LNode* node2 = BuyListNode(2);
	LNode* node3 = BuyListNode(3);
	LNode* node4 = BuyListNode(4);
	LNode* node5 = BuyListNode(5);
	L->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	return L;
}
void test(LNode*LT)
{
	LT = CreatListNode();
	PrintListNode(LT);
	LNode*r=middleNode(LT);
	printf("%d", r->data);
}
int main()
{
	LNode* LT = NULL;
	test(LT);
	

}