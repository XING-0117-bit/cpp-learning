#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void left_round(int *pa, int sz, int k)
//{
//	k %= sz;
//	while (k--)
//	{
//		int tmp = pa[sz-1];
//		for (int i = sz-1; i>0; i--)
//		{
//			
//			pa[i] = pa[i-1];
//		}
//		 pa[0]=tmp;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int k = 0;
//	int num[] = { 3,5,7,8,9,2};
//	scanf("%d", &k);
//	int sz = sizeof(num) / sizeof(num[0]);
//	left_round(num, sz, k);
//	Print(num, sz);
//	return 0;
//}
//// 轮转N次相当于回到原来的顺序，所以k?于N时，只需要轮转余数次 
//void rotate(int* nums, int numsSize, int k) {
//k %= numsSize;
//// 轮转k次 
//while (k--) {
//		// 向右轮转?个位置 
//		int tmp = nums[numsSize - 1];
//		for (int i = numsSize - 1; i > 0; i--)
//		{
//				nums[i] = nums[i - 1];
//		}
//		nums[0] = tmp;
//}
//}
//#include<stdio.h>
//void left_round(int* pa, int sz, int k)
//{
//	k %= sz;//提高代码效率，也就是需要旋转的次数中把重复的部分删去
//	while (k--)
//	{
//		int tmp = pa[sz - 1];
//		for (int i = sz - 1; i > 0; i--)
//		{
//			pa[i] = pa[i - 1];
//		}
//		pa[0] = tmp;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);//k是旋转的次数
//	int arr[] = { 6,9,8,3,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的长度
//	left_round(arr, sz, k);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//void left_round(int* pa, int sz, int k)
//{
//	k %= sz;
//	int num[] = { 0 };
//	for (int i = 0; i < k; i++)
//	{
//		num[i] = pa[sz - i];
//	}
//	for (int i = sz-k; i >0; i--)
//	{
//		pa[i-1] = pa[i];
//	}
//	for (int i = 0; i < k; i++)
//	{
//		pa[i] = num[i];
//	}
//	
//}
//int main()
//{
//	int arr[] = { 4,7,9,8,4,3 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	left(arr, sz, k);
//	return 0;
//}
//#include<stdio.h>
//void left_round(int* pa, int sz, int k)
//{
//	k %= sz;
//	int tmp[k];
//		int j = 0;
//		for (int i = sz - k; i < sz; ++i)
//		{
//			tmp[j++] = pa[i];
//		}
//		for (int i = sz - k - 1; i >= 0; i--)
//		{
//			pa[i + k] = pa[i];
//		}
//		for (int i = 0; i < k; i++)
//		{
//			 pa[i]=tmp[i];
//		}
//
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6 };
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	left_round(arr, sz, k);
//	Print(arr, sz);
//	return 0;
//}

//void rotate(int* pa, int sz, int k)
//{
//	k %= sz;
//	if (k == 0)
//	{
//		return;
//	}
//	int tmp[k];
//	int j = 0;
//	for (int i = sz - k; i < sz; ++i)
//	{
//		tmp[j++] = pa[i];
//	}
//	for (int i = sz - k - 1; i >= 0; --i)
//	{
//		pa[i + k] = pa[i];
//	}
//	for (int i = 0; i < k; ++i)
//	{
//		pa[i] = tmp[i];
//	}
//
//}
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//
//注意：本题相对书上原题稍作改动
//
//示例 1：
//
//输入：[3, 0, 1]
//输出：2
//
//
//示例 2：
//
//输入：[9, 6, 4, 2, 3, 5, 7, 0, 1]
//输出：8
#include<stdio.h>
void cmp_int(const void*e1,const void*e2)
{
	return*(int*)e1 - *(int*)e2;
}

int missingNumber(int* nums, int numsSize)
{
	qsort(nums, numSize, sizeof(int), cmp_int);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		int j = 0;
		if (pa[i] != i)
		{
			
			return  i;
		}
	}
	return i ;
	
}
int main()
{
	int arr[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };//012345679
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	/*Print(arr, sz);*/
	int r=Find_number(arr, sz);
	printf("%d", r);
	return 0;
}