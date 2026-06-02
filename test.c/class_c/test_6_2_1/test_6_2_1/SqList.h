#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SqDatatype;
typedef struct SqListene
{
	SqDatatype* arr;
	int size;
	int capacity;
}SqList;
void SqListInit(SqList* ps);
void SqListDestory(SqList* ps);

