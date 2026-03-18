#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (a == 1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a == 1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0; ⚠️初始化
//	scanf("%d", &n);
//	while (n != 0) ⚠️判断
//	{
//		int i = n % 10;
//		printf("%d ", i);
//		n = n/10;⚠️调整
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{        ⚠️初始化 ⚠️判断 ⚠️调整
//	for (int i = 1; i <=10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 100; i+=3)
//	{
//			sum += i;
//    }
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	do
//	{
//		n++;
//		printf("%d ", n);
//	} while (n <10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	do
//	{
//		a++;
//		n = n / 10;
//	} while (n != 0);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		else
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		else
//		{
//			printf("%d", i);
//		}
//		i++;
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d", i);
//		}
//		i++;
//	}
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int flag = 1;
	int i = 0;
	for ( i = 100; i < 200; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag == 0)
	{
		printf("%d", i);
	}
	return 0;
}