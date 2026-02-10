#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int num = 0;
//	scanf("%d", &max);
//	for (i = 2; i <= 10; i++)
//	{
//		scanf("%d", &num);
//		if (num > max)
//		{
//			max = num;
//		}
//
//	}
//	printf("%d", max);
//
//	return 0;
//
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//    int main()
//    {
//        Fraction a = { 1, 1 };  
//        Fraction b = -{ 1, 2};
//        for()
//}
//#include <stdio.h>
//
//typedef struct {
//    int numerator;
//    int denominator;
//} Fraction;
//
//int main() {
//    Fraction fractions[100];  // 创建10个分数的数组
//
//    // 使用for循环初始化分数
//    for (int i = 0; i < 99; i++) {
//        fractions[i].numerator = i + 1;      // 分子: 1,2,3,...10
//        fractions[i].denominator = i + 2;    // 分母: 2,3,4,...11
//    }
//
//    // 打印所有分数
//    for (int i = 0; i < 99; i++) {
//        printf("分数%d: %d/%d\n", i + 1,
//            fractions[i].numerator,
//            fractions[i].denominator);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =sum+ 1.0 / i *flag;
//		flag = -flag;
//
//	}
//	printf("%lf", sum);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 9; i <= 100; i += 10)
//	{
//		j++;
//	}
//	printf("%d", j);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}
//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//for (i = 1000; i <= 2000; i++)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		printf("%d ", i);
//	}
//   }
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a * b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 4;
//	printf("%d", a / b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 4;
//	printf("%f", 6.0/ 4);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 4;
//	printf("%f", a / b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 4;
//	printf("%d", 6 % 4);
//	return 0;
//}
#include<stdio.h>
int main()
{
	printf("%d\n", -11 % 5);
	printf("%d\n", -11 % -5);
	printf("%d\n", 11 % -5);
	printf("%d\n", 11 % 5);
	return 0;
}
