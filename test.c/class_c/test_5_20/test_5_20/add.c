#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return*(int*)e1 - *(int*)e2;
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if(*(float*)e1 < *(float*)e2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void Print(float arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.2f", arr[i]);
//	}
//}
//int main()
//{
//	float arr[] = { 1.3,0.5,2.5,9.8,6.5,4.3,7.5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
////int cmp_by_age(const void* e1, const void* e2)
////{
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//void Print(struct Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i].name);
//		printf("%d\n", arr[i].age);
//	}
//}
//int main()
//{
//	struct Stu arr[] = { {"zhangsan",18},{"lisi",16},{"wangwu",19}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_by_name);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_by_age);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//void Swape(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swape((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//	return 0;
//}

#include<stdio.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
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
void bubble_sort(void* base, int sz, int width, int(*cmp_by_age)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_by_age((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swape((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void Print(struct Stu arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
		printf("%d\n", arr[i].age);
	}
}
int main()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_by_age);
	Print(arr, sz);
	return 0;
}