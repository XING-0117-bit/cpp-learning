#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* ch[] = { &arr1,&arr2,&arr3 };
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			printf("%d", ch[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void Print(int (*pa)[5], int r, int n)
//{
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			printf("%d", pa[i][j]);
//		}printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	Print(arr, 3, 5);
//	return 0;
//}
//#include<stdio.h>
//void Print(int (*arr)[5], int r, int n)
//{
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			printf("%d", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	Print(arr, 3, 5);
//	return 0;
//}
//#include<stdio.h>
//void Print(int* pa,int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", *(pa + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	Print(arr, sz);
//	return 0;
//
//}写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。



//例如：给定s1 =AABCD和s2 = BCDAA，返回1
//
//给定s1=abcd和s2=ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//#include<stdio.h>
//#include<string.h>
//int left_round(char* s1,char*s2,int k)
//{
//	size_t len = strlen(s1);
//	int time = k % len;
//	for (int i = 0;i < time;i++ )
//	{
//		int j = 0;
//		char tmp = s1[0];
//		for ( j = 0;j < len - 1;j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[j] = tmp;
//	}
//	if (strcmp(s1,s2)==0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char s1[] = "ABCDA";
//	char s2[] = "CDAAB";	
//	int k = 0;
//	scanf("%d",&k);
//	int r=left_round(s1,s2,k);
//	printf("%d", r);
//	/*printf("%s\n", s1);*/
//	return 0;
//
//
//}
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。



//要求：时间复杂度小于O(N);
//#include<stdio.h>
//int search_number(int arr[],int k)
//{
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			if (*arr[i][j] == k)
//			{
//				return 1;
//			}
//			else
//				return 0;
//		}
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,5,6,7,8,9 };  
//	int k = 0;
//	scanf("%d", &k);
//	int search_number(arr,k);
//	return 0;
//
//}
//#include<stdio.h>
//int Find_number(int arr[][5], int x, int y, int k)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x&&j>0)
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int r=Find_number(arr, 3, 5, k);
//	printf("%d", r);
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include<stdio.h>
//int main()
//{
//	char killer = 'a';
//	for (;killer <='d';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("凶手是%c", killer);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
void YANGHUI_ANGLE(int arr[4][4], int k)
{
	for (int i = 0;i < k;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}
void Print(int arr[4][4], int k)
{
	for (int i = 0;i < k;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[4][4] = {0};
	YANGHUI_ANGLE(arr, 4);
	Print(arr, 4);
	return 0;
}