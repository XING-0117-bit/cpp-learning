#define _CRT_SECURE_NO_WARNINGS
#include"SqList.h"
int main()
{
	SqList s;
	SqListInit(&s);
	SqListDestory(&s);
	int* ptr1 = (int*)malloc(16);
	/*printf("%d", ptr1);*/
	int* ptr2 = (int*)realloc(malloc, 32);
	/*printf("%d", ptr2);*/
	SqListInsert(&s, 1, 2);
}