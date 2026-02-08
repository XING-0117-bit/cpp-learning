#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//
//		}
//		if (i == j)
//		{
//			flag = 1;
//		}
//		if (flag = 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b-5;
	}
	printf("%d\n", a);
	return 0;
}