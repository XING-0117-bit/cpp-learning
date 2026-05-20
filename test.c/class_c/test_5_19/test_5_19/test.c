#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
// void Swap(char*buf1, char*buf2, int width)
//{
//	 int i = 0;
//	 for (i = 0; i < width; i++)
//	 {
//		 char tmp = *buf1;
//		*buf1 = *buf2;
//		 *buf2 =tmp;
//		 *buf1++;
//		 *buf2++;
//	 }
//}
//int cmp(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void bubble_sort(void *base, int sz, int width, int(*cmp)(const void*e1,const void*e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	Print(arr, sz);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}
void Swape(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
void bubble(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swape((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
Print(struct Stu arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
		printf("%d\n", arr[i].age);
	}
}
int main()
{
	struct Stu arr[] = { {"zhangsan",17},{"lisi",15},{"wangwu",14}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), cmp_by_name);
	Print(arr, sz);
	return 0;
}