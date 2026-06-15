#define _CRT_SECURE_NO_WARNINGS
#include"sqList.h"
void SqListInit(SqList* ps)
{
	assert(ps);
	ps->arr = (SqDatetype*)malloc(sizeof(SqDatetype) * 4);
	if (ps->arr == NULL)
	{
		printf("InitSqlist 申请空间失败\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SqListDestroy(SqList* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
SqDatetype GetElem(SqList* ps, int i)
{
	assert(ps);
	assert(i >= 0 && i < ps->size);
	return ps->arr[i];
}
int LocateElem(SqList* ps, SqDatetype x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x) {
			return i;
		}
	}
	return -1;
}
void SqListInsert(SqList* ps, int i, SqDatetype x)
{
	assert(ps);
	assert(i >= 0 && i <= ps->size);
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SqDatetype* tmp = (SqDatetype*)realloc(ps->arr, sizeof(SqDatetype) * newCapacity);
		if (tmp == NULL)
		{
			printf("扩容失败\n");
			return;
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
	for (int j = ps->size; j > i; j--)
	{
		ps->arr[j] = ps->arr[j - 1];
	}
	ps->arr[i] = x;
	ps->size++;
}
void SqListDelete(SqList* ps, int i)
{
	assert(ps);
	assert(i >= 0 && i < ps->size);
	for (int j = i; j < ps->size - 1; j++)
	{
		ps->arr[j] = ps->arr[j + 1];
	}
	ps->size--;
}
void SqListUpdate(SqList* ps, int i, SqDatetype x)
{
	assert(ps);
	assert(i >= 0 && i < ps->size);
	ps->arr[i] = x;
}
void SqListPrint(SqList* ps)
{
	assert(ps);
	printf("SqList: ");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
