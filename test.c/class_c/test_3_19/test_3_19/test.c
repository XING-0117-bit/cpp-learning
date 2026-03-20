#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int flag = 0;
//	int mid = 0;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("%d", mid);
//		
//	}
//	else
//	{
//		printf("未到下标\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int search_number(int l, int r, int arr[], int x)
//{
//	int mid = 0;
//while (l < r)
//{
//	
//	mid = (l + r) / 2;
//	if (arr[mid] == x)
//	{
//		return mid;
//		
//	}
//	else if (arr[mid] < x)
//	{
//		l = mid + 1;
//	}
//	else
//	{
//		r = mid - 1;
//	}
//}
//return -1;
//
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	int w=search_number(0, sz-1,arr,n);
//	if (w != -1)
//	{
//		printf("%d", w);
//	}
//	else
//	{
//		printf("未找到下标\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//void Print(int x)
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//#include<stdio.h>
//void is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}
#include<stdio.h>
void is_prime()
{
	for (int i = 100; i < 200; i++)
	{
		int flag = 1;
		for (int j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			
			
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
}
int main()
{
	
	is_prime();
	
	return 0;
}