#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"sqList.h"
int main()
{
	SqList s;
	SqListInit(&s);
	//SqListInit(s);
	SqListDestory(&s);
	/*SqList* ptr = NULL;*/
	//SqListInit(ptr);
	printf("%d", GetElem(&s, 0));
}