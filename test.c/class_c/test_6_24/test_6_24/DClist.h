#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
typedef int DCLDataType;
typedef struct DCListNode
{
	DCLDataType data;
	struct DCListNode* prev;
	struct DCListNode* next;
}DCListNode;
DCListNode* DCListInit();
//void DCListDestroy(DCListNode* L);

void DCListInsert(DCListNode* pos, DCLDataType x);

//void DCListDelete(DCListNode* pos);

void DCListPushFront(DCListNode* L, DCLDataType x);

void DCListPushBack(DCListNode* L, DCLDataType x);
void DCListPrint(DCListNode* L);
void DCListPopFront(DCListNode* L);
void DCListPopBack(DCListNode* L);

