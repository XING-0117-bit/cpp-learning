#define _CRT_SECURE_NO_WARNINGS
#include"SqList.h"
void SqListInit(SqList* ps)
{
	assert(ps);
	ps->arr = (SqDatatype*)malloc(sizeof(SqDatatype) * 4);
	if (ps->arr == NULL)
	{
		printf("ÄÚ´æÉêÇëÊ§°Ü£¡£¡£¡\n");
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