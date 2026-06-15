#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"sqList.h"
int main()
{
	SqList s;
	SqListInit(&s);

	SqListInsert(&s, 0, 10);
	SqListInsert(&s, 1, 20);
	SqListInsert(&s, 2, 30);
	SqListInsert(&s, 3, 40);
	SqListPrint(&s);

	SqListInsert(&s, 1, 15);
	SqListPrint(&s);

	SqListDelete(&s, 2);
	SqListPrint(&s);

	SqListUpdate(&s, 0, 99);
	SqListPrint(&s);

	int pos = LocateElem(&s, 30);
	printf("Locate 30: %d\n", pos);

	pos = LocateElem(&s, 999);
	printf("Locate 999: %d\n", pos);

	SqListDestroy(&s);
	return 0;
}
