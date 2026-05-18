#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	typedef unsigned int unit;
//	unit s1;
//	int unsigned s2;
//}
//#include<stdio.h>
//int main()
//{
//	typedef int* ptr;
//	int* pa;
//	ptr pb;
//	return 0;
//}
//
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//typedef int(*ptr)(int,int);           //int(*pa)[5](int x,int y)
//int main()
//{
//	int (*pa)(int ,int) = &Add;
//	ptr pb = &Add;
//	return 0;
//}
//转移表
//#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	switch (input)
//	{
//	case 1:
//	{
//		printf("请输入数值\n");
//		scanf("%d %d", &x, &y);
//		int r=Add(x, y);
//		printf("%d", r);
//	}
//		break;
//	case 2:
//	{
//		printf("请输入数值\n");
//		scanf("%d %d", &x, &y);
//		int r = Sub(x, y);
//		printf("%d", r);
//	}
//		break;
//	case 3:
//	{
//		printf("请输入数值\n");
//		scanf("%d %d", &x, &y);
//		int r = Mul(x, y);
//		printf("%d", r);
//	}
//		break;
//	case 4:
//	{
//		printf("请输入数值\n");
//		scanf("%d %d", &x, &y);
//		int r = Div(x, y);
//		printf("%d", r);
//	}
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int r = 0;
//	int x = 0;
//	int y = 0;
//	int(*pa[5])(int x,int y) = {NULL, Add,Sub,Mul,Div};
//	do
//	{
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入数值\n");
//			scanf("%d %d", &x, &y);
//			r = pa[input](x,y);
//			printf("%d", r);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//	return 0;
//}
#include<stdio.h>
void calc(int(*pa)(int , int ))
{
	int x = 0;
	int y = 0;
	int r = 0;
	printf("请输入数值\n");
	scanf("%d %d", &x, &y);
	r = pa(x, y);
	printf("%d", r);
}
int main()
{
	int input = 0;
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			calc(Add);
			break;
		}
		case 2:
		{
			calc(Sub);
			break;
		}
		case 3:
		{
			calc(Mul);
				break;
		}
		case 4:
		{
			calc(Div);
				break;
		}
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
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
//void Print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 2,5,3,8,9,7,6,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//void Print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void test()
//{
//	int arr[] = { 2,5,3,6,7,1,8,4,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	 qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	 Print(arr, sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<stdio.h>
//void cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void test()
//{
//	int arr[] = { 2,5,3,4,7,1,9,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//}
//int main()
//{
//	test();
//	return 0;
//}