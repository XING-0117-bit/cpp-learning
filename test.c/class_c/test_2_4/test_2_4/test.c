#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		if (b > c)
//			printf("%d %d %d", a, b, c);
//		else
//			printf("%d %d %d", a, c, b);
//	}
//	else if (b > a && b > c)
//	{
//		if(a>c)
//			printf("%d %d %d", b, a, c);
//		else 
//			printf("%d %d %d", b, c, a);
//	}
//	else
//	{
//		if(a>b)
//			printf("%d %d %d", c, a, b);
//		else
//			printf("%d %d %d", c, b, a);
//	}
//	
//	return 0;
//}
//输??个整数，判断是否为奇数，如果是奇数打印是奇数，否则打印偶数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 0)
//		printf("%d是偶数", i);
//	else
//		printf("%d是奇数", i);
//	return 0;
//
//}
//输??个年龄， >= 18岁就输出：成年，否则就输出未成年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i >= 18)
//	
//		printf("成年\n");
//	
//	else
//		printf("未成年\n");
//	return 0;
//}
//?如：要求输??个整数，判断输?的整数是0，还是正数或者负数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i > 0)
//		printf("%d是正数\n", i);
//	else if (i < 0)
//		printf("%d是负数\n", i);
//	else
//		printf("%d是0\n", i);
//	return 0;
//}
//输??个整数，如果是正数，再判断是奇数还是偶数，并输出；如果不是正数则输出：?正数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i > 0)
//	{
//		
//		if (i % 2 == 0)
//		{
//			printf("%d是偶数\n", i);
//		}
//		else
//		{
//			printf("%d是奇数\n", i);
//		}
//		printf("%d是正数\n", i);
//	}
//	else
//		printf("%d是非正数\n");
//	return 0;
//}
//输??个?的年龄
//如果年龄 < 18岁，打印"少年"
//	如果年龄在18岁?44岁打印"?年"
//	如果年龄在45岁?59岁打印"中?年"
//	如果年龄在60岁?89岁打印"?年"
//	如果90岁及以上打印"?寿星"
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i <= 18)
//		printf("少年\n");
//	 else if (i <= 44)
//		printf("青年\n");
//	 else if (i <= 59)
//		printf("中老年\n");
//	 else if (i <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//		return 0; 
//}
//	
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i <= 18)
//	{
//		printf("少年\n");
//	}
//	else
//	{
//		if (i <= 44)
//		{
//			printf("青年\n");
//		}
//		else
//		{
//			if (i <= 59)
//			{
//				printf("中老年\n");
//			}
//			else
//			{
//				if (i <= 89)
//				{
//					printf("老年\n");
//				}
//				else
//				{
//					printf("老寿星\n");
//				}
//			}
//		}
//	}
//	
//	return 0;
//}
//悬空else
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//
//		if (b == 0)
//			printf("HEHE\n");
//		else
//			printf("HAHA\n");
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 4;
//	int t = 8;
//	if (i<t<j)
//		printf("hehe\n");多个运算关系符不宜连用，因为编译器会觉得i<t是真的所以返回值为1而1确实小于4所以明明式子为假但是编译器会判定为真所以会打印hehe
//	else
//		printf("haha\n");
//	
//	return 0;
//
//}
//所以比如我们这样写代码
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);//这样写代码就是不太成立就是会有一种情况，无论你输入多少都会输出青年
//	if (18 <= i <= 36)
//		printf("青年");
//	return 0;
//}
//用三目操作符来比较三个数最大值
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = (a > b ? a : b);
//		printf("%d", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)//&&操作符就是表示并列的意思就是两边的条件都必须同时满足才可以
//	{
//		printf("%d月是春天", month);
//	}
//	return 0;
//}
//||操作符：就是或运算符，只需要一部分条件满足即可
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{                                                  //||只需要满足一个条件即可
//		printf("%d月是冬季",month);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0||year%400==0)
//	{
//		printf("%d是闰年", year);
//	}
//	return 0;
//}
//逻辑运算符就是会先判断左边成立不成了，如果是并列操作符左边不成立则不会再判断右边成立不成了，如果是或操作符左边成立的话就不会再判断右边成立不成立
//#include<stdio.h>
//int main()
//{
//	int i = 0; int a = 0; int b = 0; int c = 2; int d = 3; int t = 4;
//	i = a++ && b++ & t++;
//	{
//		printf("%d %d %d %d %d", a, b, c, d, t);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0; int a = 0; int b = 0; int c = 2; int d = 3; int t = 4;
//	i = a++ ||b++ || t++;
//	{
//		printf("%d %d %d %d %d", a, b, c, d, t);
//	}
//	return 0;
//}