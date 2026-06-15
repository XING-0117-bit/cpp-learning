#define _CRT_SECURE_NO_WARNINGS
#include"SqList.h"
int main()
{
	SqList s;
	SqListInit(&s);
	SqListDestory(&s);
	SqListInsert(&s, 1, 2);
	Print(&s);
	return 0;
}