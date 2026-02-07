#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//	int main()
//	{
//		int i = 0;
//		int sum = 0;
//		for (i = 1; i <= 10; i++)
//		{
//			if (i %3 == 0)
//			{
//				sum +=i;
//			}
//			
//		}
//			printf("%d ", sum);
//		return 0;
//	}
//	
//#include<stdio.h>
//int main()
//{	
//	int i = 1;
//	int sum = 0;
//	while (i<=10)
//	{
//		i++;
//	
//	if (i % 3 == 0)
//	
//		sum += i;
//	}
//	printf("%d", sum);
//	
//	return 0;
//}
//#include < stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}
//输⼊⼀个正整数，计算这个整数是⼏位数？
//例如：
//输⼊：1234 输出：4
//输⼊：12 输出：2
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &i);
//	do
//	{
//		n++;
//		i= i / 10;
//	} while (i);
//	printf("%d", n);
//		return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		n++;
//		i = i / 10;
//
//	}
//	printf("%d", n);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	scanf("%d", &a);
//	for ( i=a; i>0 ; i/= 10)
//	{
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	}return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i ==5)
//			break;
//		printf("%d", i);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//
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
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//
//		
//	}
//	
//	
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				flag = 0;
			break;

		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}