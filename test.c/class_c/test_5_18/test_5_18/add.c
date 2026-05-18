#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//Print(float arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.2f ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int cmp_float(const void* p1, const void* p2)
//{
//	if(*(float*)p1>*(float*)p2)
//{
//	return 1;
//}
//	else if (*(float*)p1< *(float*)p2)
//	{
//		return -1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//int main()
//{
//	float arr[] = { 1.0,2.3,4.6,5.7,8.3,2.4,6.5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float); 
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_str_by_name(const void* p1, const void* p2)
//{
//	return strcmp((*(struct Stu*)p1).name , (*(struct Stu*)p2).name);
//}
//void Print(struct Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//int main()
//{
//	struct Stu arr[] = { {"zhangsan",18},{"lisi",14},{"wangwu",17}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_str_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str_by_name);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_str_by_name(const void* p1, const void* p2)
//{
//	return strcmp((*(struct Stu*)p1).name, (*(struct Stu*)p2).name);
//}
//void Print(struct Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//int main()
//{
//	struct Stu arr[] = { {"zhangsan",18},{"lisi",14},{"wangwu",17} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_str_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str_by_name);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x* y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*pa[5]) (int x,int y) = {NULL,Add,Sub,Mul,Div};
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	do
//	{
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数\n");
//			scanf("%d %d", &x, &y);
//			r = pa[input](x, y);
//			printf("%d", r);
//		}
//		else if(input == 0)
//		{
//			printf("您已退出游戏\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pa)(int x, int y))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入操作数\n");
//	scanf("%d %d", &x, &y);
//	r = pa(x, y);
//	printf("%d", r);
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			calc(Add);
//			break;
//		}
//		case 2:
//		{
//			calc(Sub);
//			break;
//		}
//		case 3:
//		{
//			calc(Mul);
//			break;
//		}
//		case 4:
//		{
//			calc(Div);
//			break;
//		}
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//int cmp_float(const void* p1, const void* p2)
//{
//	if (*(float*)p1 > *(float*)p2)
//	{
//		return 1;
//	}
//	else if (*(float*)p1 < *(float*)p2)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//void Print(float arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.2f ", arr[i]);
//	}
//}
//int main()
//{
//	float arr[] = { 5.4,1.3,6.5,3.4,9.8,1.2,7.4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	Print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_str_by_age(const void* p1, const void* p2)
//{
//	return (*(struct Stu*)p1).age -(*(struct Stu*)p2).age;
//}
//void Print(struct Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i].age);
//		printf("%s\n", arr[i].name);
//	}
//}
//int main()
//{
//	struct Stu arr[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str_by_age);
//	Print(arr, sz);
//	return 0;
//}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//
//编写一个函数找出这两个只出现一次的数字。
//
//
//
//例如：
//
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//
//只有5和6只出现1次，要找出5和6.
//#include<stdio.h>
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };//1,1,2,2,3,3,4,4,5,6
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		while (arr[i] == arr[i + 1])
//		{
//			i+=2;
//		}
//		
//			printf("%d ", arr[i]);
//	}
//	return 0;
//	
//}
//描述
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//示例1
//输入：
//2008 2
//复制
//输出：
//29
#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		int arr[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			arr[2] += 1;
		}
		printf("%d", arr[month]);

	}

	return 0;
}
