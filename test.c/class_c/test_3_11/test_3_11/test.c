#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while(scanf("%d", &n)!=EOF)
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j || i + j == n - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//			
//		}printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[n][m];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//	
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr1[n];
	int arr2[m];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}
	int i = 0;
	int j = 0;
	while (i == j && arr1[i] > arr2[j])
	{
		printf("%d", arr1[j]);
	}
	while (arr1[i]>arr2[j])
	{
		printf("%d", arr2[j]);
		j++;
	}
	while (arr1[i] < arr2[j])
	{
		printf("%d", arr2[i]);
		i++;
	}
	return 0;
}