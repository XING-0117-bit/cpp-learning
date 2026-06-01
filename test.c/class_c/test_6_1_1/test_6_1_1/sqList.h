#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SqDatetype;
typedef struct SeqenceList {
	SqDatetype* arr;
	int size;
	int capacity;
}SqList;
void SqListInit(SqList* ps);
//void SqListInit(SqList &ps);
void SqListDestory(SqList* ps);
 SqDatetype GetElem(SqList*ps, int i);