#define _CRT_SECURE_NO_WARNINGS 
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	while (scanf("%d", &money) != EOF)
//	{
//		int total = money;
//		int empty = money;
//		while (empty>1)
//		{
//			total = total + empty / 2;
//			empty = empty / 2 + empty % 2;
//		}
//		printf("%d", total);
//	}
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		int count = 0;
//		int tem = i;
//		while (tem != 0)
//		{
//			tem = tem / 10;
//			count++;
//		}
//		tem = i;
//		int sum = 0;
//		while (tem != 0)
//		{
//		   sum+=pow(tem % 10, count);
//			tem = tem / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int sum = 0;
	int tem = 0;
	int a = 2;
	for (int i = 0; i < 5; i++)
	{
		tem = tem * 10 + a;
		sum += tem;
	}
	printf("%d", sum);
	return 0;
}