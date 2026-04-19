#define _CRT_SECURE_NO_WARNINGS 
\#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,10,44,66,77 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		int left = 0;
//		int find = 0;
//		int mid = 0;
//		int right = sz - 1;
//		while (left < right)
//		{
//			 mid = (right + left) / 2;
//			if (arr[mid] > n)
//			{
//				 right = mid - 1;
//			}
//			else if (arr[mid]<n)
//			{
//				 left = mid + 1;    
//			}
//			else
//			{
//				find = 1;
//				break;
//			}
//		}
//		if (find == 1)
//		{
//			printf("找到了，下标是%d", mid);
//		}
//		else
//		{
//			printf("未查找到\n");
//		}
//		return 0;
//		
//	
//}
//#include<stdio.h>
//int main()
//{
//	char ch1[] = "Welcome to bit!!!!!!!";
//	char ch2[] = "*********************";
//	int left = 0;
//	int right = strlen(ch1) - 1;
//	printf("%s\n", ch2);
//	while (left < right)
//	{
//		Sleep(1000);
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		left++;
//		right--;
//		printf("%s\n", ch2);
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	char ch1[] = "Welcome to C world!!!!!";
//	char ch2[] = "***********************";
//	int left = 0;
//	int right = strlen(ch2) - 1;
//	printf("%s\n", ch2);
//	while (left < right)
//	{
//		Sleep(1000);
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		left++;
//		right--;
//		printf("%s\n", ch2);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 66;
	int arr[] = { 1,3,4,5,6,7,8,9,66,77,88 };
	int left = 0;
	int mid = 0;
	int find = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			find = 1;
			break;
		}
	}
	if (find == 1)
	{
		printf("找到了，下标是%d", mid);
	}
	else
	{
		printf("未查找到\n");
	}
	return 0;
}