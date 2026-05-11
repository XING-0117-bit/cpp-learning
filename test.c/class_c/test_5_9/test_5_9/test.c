#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void bubble_sort(int arr[], int r)
{
	int i = 0;
	int flag = 0;
	for (int j = 0; j < r; j++)
	{
		for (int i = 0; i < r - j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				flag = 0;
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}

		}
		if (flag == 1)
		{
			break;
		}

	}
}
void Print(int arr[], int r)
{
	for (int i = 0; i < r; i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[] = { 4,6,3,6,8,9,5,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	Print(arr, sz);
	return 0;
}