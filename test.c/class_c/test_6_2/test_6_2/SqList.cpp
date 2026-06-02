#define _CRT_SECURE_NO_WARNINGS
#include"SqList.h"
void SqListInit(SqList* ps)
{
	assert(ps);
	ps->arr = (SqDatatype*)malloc(sizeof(SqDatatype) * 4);
	if (ps->arr == NULL)
	{
		printf("内存申请失败\n");
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SqListDestory(SqList* ps)
{
	assert(ps);
	if (ps->arr)
	{
		free(ps->arr);
		ps->size = 0;
		ps->capacity = 0;
		ps->arr = NULL;
	}
	
}
void SqListInsert(SqList* ps, int i, SqDatatype x) {
	assert(ps);
	// 这两种检查?式都可以，看你的需求
	assert(i >= 0 && i <= ps->size);
	/*
	if (i < 0 || i > ps->size) {
	printf("请在[0, %d]范围内插?\n", ps->size);
	return;
	}*/
	if (ps->size == ps->capacity) {
		// 满了扩容
		SqDatatype* tmp = (SqDatatype*)realloc(ps->arr, sizeof(SqDatatype) *
			ps->capacity * 2);
		if (tmp == NULL) {
			printf("SqListInsert: 内存申请空间失败!!!\n");
			return;
		}
		ps->arr = tmp;
		ps->capacity *= 2;
	}
	// 挪动数据
	// 注意：j是下标，i是位序
	for (int j = ps->size - 1; j >= i - 1; j--) {
		ps->arr[j + 1] = ps->arr[j];
	}
	ps->arr[i] = x;
	ps->size++;
}