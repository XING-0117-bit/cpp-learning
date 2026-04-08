#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[3]);
//	printf("%d\n", arr[7]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,7,8,5,9,3,10};
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr[0]));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		printf("%d", sz);
//		return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,5,6,7,8,9 };
//	printf("%d", arr[2][3]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = {0};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n] ;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}