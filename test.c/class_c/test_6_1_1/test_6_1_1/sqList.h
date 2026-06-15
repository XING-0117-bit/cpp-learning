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
void SqListDestroy(SqList* ps);
SqDatetype GetElem(SqList* ps, int i);
int LocateElem(SqList* ps, SqDatetype x);
void SqListInsert(SqList* ps, int i, SqDatetype x);
void SqListDelete(SqList* ps, int i);
void SqListUpdate(SqList* ps, int i, SqDatetype x);
void SqListPrint(SqList* ps);
