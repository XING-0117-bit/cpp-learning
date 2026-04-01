#define _CRT_SECURE_NO_WARNINGS 
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include<stdio.h>
//int Total(int money)
//{
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return total;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int a = Total(n);
//		printf("%d\n", a);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int line = 7;
	for (int i = 0; i < line ; i++)
	{
		for (int j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < line-1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}

			for (int k = 0; k < (line-1-i) * 2 -1; k++)
			{
				printf("*");
			}
			printf("\n");
		
	}
	return 0;
}