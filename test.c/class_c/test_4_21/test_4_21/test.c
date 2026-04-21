#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int n = -1;
//	int m = 0;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int m = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		m = ((n>>i )&1);
//		if (m == 1)                       //任何数字只要和1&就能得到从数字二进制中的最后一位数字
//		{
//			count++;
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int COUNT(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r=COUNT(n);
//	printf("%d", r);
//	return 0;
//
//}
//打印整数二进制的奇数位和偶数位
//
//作业内容
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	int a = 0;
//	for (int i = 31; i>0; i -= 2)
//	{
//		m = (n >> i) & 1;
//		printf("%d", m);
//	}
//	printf("\n");
//	for (int i = 30; i >=0; i -= 2)
//	{
//		a = ((n >> i) & 1);
//		printf("%d",a);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int a = 0;
//	int count = 0;
//	a = n ^ m;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) ==1 )
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        int c = 0;
//        int count = 0;
//        c = a ^ b;
//        while (c)
//        {
//            c = c & (c - 1);
//            count++;
//        }
//        printf("%d\n", );
//    }
//    return 0;
//}