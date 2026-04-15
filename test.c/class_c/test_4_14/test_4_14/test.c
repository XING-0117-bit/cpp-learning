#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//void Print(n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//
//}
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d", ret);
//	}
//	return 0;
//}
//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int Fac(n, k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * Fac(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret=Fac(n, k);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//
//int Fac(n, k)
//
//{
//
//	if (k == 0)
//
//		return 1;
//
//	else
//
//		return n * Fac(n, k - 1);
//
//}
//
//int main()
//
//{
//
//	int n = 0;
//
//	int k = 0;
//
//	while (scanf("%d %d", &n, &k) != EOF)
//
//	{
//
//		int ret = Fac(n, k);
//
//		printf("%d", ret);
//	}
//
//		return 0;
//
//	
//
//}
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int a = 0;
//	while (n)
//	{
//		a += n % 10;
//		n=n/10;
//		
//	}
//	return a;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int a = 0;
//
//	if (n <= 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	while (m)
	{
		printf("%d ", m % 10);
		m /= 10;
	}
	return 0;
}