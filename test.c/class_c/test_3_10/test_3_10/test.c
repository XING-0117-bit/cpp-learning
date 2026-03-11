#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//	for( int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for ( int j = 0; j < m; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	int i = 0;
//	int j = 0;
//	while (i<n&&j<m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	while (i<n)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j<m)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int a = 0;
//	int arr[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		n = arr[i];
//		sum += n;
//
//	}
//	a = sum / 10;
//	printf("%d", a);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int i;
//	int temp = 0;
//	for (i = 0; i < 3; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	
//	for (int i = 0; i < 3;i++)
//	{
//		
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//
//	
//
//	
//	return 0;
//}
