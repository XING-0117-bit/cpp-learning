#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty>1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		int count = 0;
//		int tem = i;
//		while (tem!=0)
//		{
//			tem = tem / 10;
//			count++;
//		}
//		tem = i;
//		int sum = 0;
//		while (tem != 0)
//		{
//			sum+=pow(tem % 10, count);
//			tem = tem / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int tem = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 5; i++)
//	{
//		tem = tem * 10 + n;
//		sum += tem;
//	}
//	printf("%d", sum);
//
//}