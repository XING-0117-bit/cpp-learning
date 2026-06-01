#define _CRT_SECURE_NO_WARNINGS
#include"sqList.h"
void SqListInit(SqList* ps)
{
	assert(ps);
	ps->arr = (SqDatetype*)malloc(sizeof(SqDatetype) * 4);
	if (ps->arr = NULL)
	{
		printf("InitSqlistÉêÇë¿Õ¼äÊ§°Ü\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
//void sqlistinit(sqlist &ps)
//{
//	assert(ps);
//	ps.arr = (sqdatetype*)malloc(sizeof(sqdatetype) * 4);
//	if (ps.arr == null)
//	{
//		printf("initsqlistÉêÇë¿Õ¼äÊ§°Ü\n");
//		return;
//	}
//	ps.size = 0;
//	ps.capacity = 4;
//}
void SqListDestory(SqList* ps)
{
	free(ps->arr);
	ps->size = 0;
	ps->capacity = 0;
}
 SqDatetype GetElem(SqList* ps, int i)
{
	 assert(ps);
	 assert(i < ps->size);
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
		 else
			 return -1;
	 }
 }
 int SqListInsert(SqList* ps, int i,SqDatetype x)
 {
	 assert(ps);
	 assert(i <= ps->size);
	 if (ps->size == ps->capacity)
	 {
		 SqDatetype* tmp = (SqDatetype*)realloc(ps->arr, sizeof(SqDatetype) * ps->capacity * 2);
			 if (tmp == NULL)
			 {
				 printf("À©ÈÝÊ§°Ü\n");
				 return;
			 }
	 }
	 int j = 0;
	 while (j >= i)
	 {
		 ps->arr[j + 1] = ps->arr[j];
		 --j;
	 }
	 ps->arr[i] = x;
	 ps->size++;
	 //++ps->size;
 }