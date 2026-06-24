#pragma once
#include"DCList.h"
void Test()
{
	DCListNode* L = DCListInit();
	DCListPushFront(L, 1);
	DCListPushFront(L, 2);
	DCListPushFront(L, 3);
	DCListPushFront(L, 4);
	DCListPrint(L);
	DCListPushBack(L, 5);
	DCListPushBack(L, 6);
	DCListPushBack(L, 7);
	DCListPrint(L);
	DCListPopFront(L);
	DCListPrint(L);
	DCListPopBack(L);
	DCListPrint(L);
	

}
int main()
{
	Test();
	return 0;
}