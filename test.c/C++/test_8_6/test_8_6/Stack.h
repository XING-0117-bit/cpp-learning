#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <assert.h>
using namespace std;
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
void STInit(ST* ps, int n = 4);
// Stack.cpp
#include"Stack.h"
// 缺省参数不能声明和定义同时给
void STInit(ST* ps, int n)
{
	assert(ps && n > 0);
	ps->a = (STDataType*)malloc(n * sizeof(STDataType));
	ps->top = 0;
	ps->capacity = n;
}