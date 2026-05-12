#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//void bubble_sort(int arr[], int r)
//{
//	int i = 0;
//	int flag = 0;
//	for (int j = 0; j < r; j++)
//	{
//		for (int i = 0; i < r - j-1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				flag = 0;
//				int temp = arr[i];
//				arr[i ] = arr[i+1];
//				arr[i + 1] = temp;
//			}
//			
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		
//	}
//}
//void Print(int arr[], int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 4,6,3,6,8,9,5,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr,sz);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//		return 0;
//	}
//}
#include<stdio.h>
#include<string.h>
void left_round(char* ch, int k)
{
	size_t len = strlen(ch);
	int time = k % len;
	for (int i = 0; i < time; i++)
	{
		char tmp = ch[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			ch[j] = ch[j + 1];
		}
		ch[j] = tmp;
	}
}
int main()
{
	char ch[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_round(ch, k);
	printf("%s\n", ch);
	return 0;
}