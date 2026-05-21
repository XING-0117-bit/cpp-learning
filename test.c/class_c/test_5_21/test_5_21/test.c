#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include<stdio.h>
//#include<string.h>
//int main()
////{
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));
//
//	printf("%d\n", sizeof(a + 0));
//
//	printf("%d\n", sizeof(*a));
//
//	printf("%d\n", sizeof(a + 1));
//
//	printf("%d\n", sizeof(a[1]));
//
//	printf("%d\n", sizeof(&a));
//
//	printf("%d\n", sizeof(*&a));
//
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	return 0;
//}
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//}
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//	return 0;
//}

//代码6：
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	//printf("%d\n", strlen(*p));
//	//printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//}
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[] = { 2,4,5,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int find = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//	if (find == 1)
//	 printf("找到了下标是%d", mid);
//	else
//		printf("找不到");
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[] = { 2,4,6,8,9,10,55 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int find = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//	if (find = 1)
//	{
//		printf("找到了，下标是%d", mid);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//
//}
//#include<stdio.h>
//int binaryserch(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int find = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else  if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	 }
//	if (find = 1)
//	{
//		return mid;
//	}
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[] = { 2,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int r=binaryserch(arr, sz, k);
//	printf("找到了下标为%d", r);
//	return 0;
//	
//}
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//程序的结果是什么？
//在X86环境下
//假设结构体的??是20个字节
//程序输出的结果是啥？
//
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//假设环境是x86环境，程序输出的结果是啥？
#include <stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}