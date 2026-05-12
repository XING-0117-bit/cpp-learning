#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* ch)
//{
//	size_t len = strlen(ch);
//	char*left = ch;
//	char*right = ch + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[] = "";
//	while (gets(ch))
//	{
//		Reverse(ch);
//		printf("%s\n", ch);
//	}
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//void left_round(char* ch,int k)
//{
//	size_t len = strlen(ch);
//	int time = k % len;
//	for (int i = 0;i < time;i++)
//	{
//		int j = 0;
//		char tmp = ch[0];
//		for (j = 0;j < len - 1;j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[j] = tmp;
//	}
//}
//int main()
//{
//	char ch[] = "abcde";
//	int k = 0;
//	scanf("%d", &k);
//	left_round(ch,k);
//	printf("%s\n", ch);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void left_round(char* ch, int k)
//{
//	size_t len = strlen(ch);
//	int time = k % len;
//	for (int i = 0;i < time;i++)
//	{
//		char tmp = ch[0];
//		int j = 0;
//		for (j = 0;j < len - 1;j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[j] = tmp;
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_round(ch, k);
//	printf("%s\n", ch);
//	return 0;
//}
//调整数组使奇数全部都位于偶数前面。



//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//#include<stdio.h>
//void my_sort(int* arr,int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			arr[i] = arr[i - 1];
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n] = {};
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	my_sort(arr,n);
//}
//#include<stdio.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "ooo";
//	/*strcpy(ch1, ch2);*/
//	strncat(ch1, ch2,2);
//	printf("%s\n", ch1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void left_round(char* ch, int k)
//{
//	char tmp[256] = "";
//	size_t len = strlen(ch);
//	int time = k % len;
//	strcpy(tmp,ch + time);
//	strncat(tmp, ch, time);
//	strcpy(ch, tmp);
//
//}
//int main()
//{
//	char ch[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_round(ch, k);
//	printf("%s\n", ch);
//	return 0;
//}
//#include<stdio.h>
//void Func1(int arr[], int len)
//{
//	int  left = 0;
//	int  right = len - 1;
//	while (left < right)
//	{
//			while (left < right && arr[left] % 2 != 0)
//			{
//				left++;
//			}
//			while (left < right && arr[right] % 2 == 0)
//			{
//				right--;
//			}
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//	}
//	
//}
//void Print(int arr[],int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 5,6,8,4,3,1,8,5,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Func1(arr,len);
//	Print(arr, len);
//	return 0;
//}
//#include<stdio.h>
//void Func1(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right&&arr[right]%2==0)
//		{
//			right--;
//		}
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//void Print(int arr[], int len)
//{
//	for (int i=0;i < len;i++)
//	{
//		printf("%d", arr[i]);
//	}printf("\n");
//}
//int main()
//{
//	int arr[] = { 2,7,3,1,5,9,8,6,7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Func1(arr, len);
//	Print(arr, len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i=0;i < sz;i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", *(arr + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", p[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", i[p]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", *(i+arr));
//	}
//	return 0;
//}
//#include<stdio.h>
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0;i < len - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < len - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void  Print(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, len);
//	Print(arr, len);
//	return 0;
//}
#include<stdio.h>
void bubble_sort(int arr[], int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		int flag = 0;
		int j = 0;
		for (j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
void  Print(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, len);
	Print(arr, len);
	return 0;
}
