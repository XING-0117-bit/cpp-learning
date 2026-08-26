#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
// 缺省参数不能声明和定义同时给
void STInit(ST* ps, int n=20)
{
	assert(ps && n > 0);
	ps->a = (STDataType*)malloc(n * sizeof(STDataType));
	ps->top = 0;
	ps->capacity = n;
}