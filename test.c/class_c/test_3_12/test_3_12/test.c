#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		printf("%d为奇数\n", n);
//	}
//	else
//	{
//		printf("%d为偶数\n", n);
//	}
//	return 0;
//}
//	
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2)
//	{
//		printf("%d为奇数\n", n);
//	}
//	else
//	{
//		printf("%d为偶数\n", n);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		printf("%d是奇数\n", n);
//	}
//	else
//	{
//		printf("%d是偶数\n", n);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("已成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("已成年\n");
//	    printf("可以谈恋爱\n");
//	else
//		printf("未成年\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("已成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//		printf("未成年\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		printf("%d是正数\n", n);
//	}
//	else if (n < 0)
//	{
//		printf("%d是负数\n", n);
//	}
//	else
//	{
//		printf("%d是0\n", n);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//
//		if (n % 2 == 1)
//		{
//			printf("%d是奇数\n", n);
//		}
//		else
//		{
//			printf("%d是偶数\n", n);
//		}
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}
//练习要求
//
//1. 输入一个人的年龄
//
//2. 如果年龄 < 18岁，打印"少年"
//
//	3. 如果年龄在18岁至44岁，打印"青年"
//
//	4. 如果年龄在45岁至59岁，打印"中老年"
//
//	5. 如果年龄在60岁至89岁，打印"老年"
//
//	6. 如果90岁及以上，打印"老寿星"
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <18)
//	{
//		printf("未成年\n");
//	}
//	else if (age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age <= 89)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else
//	{
//		if (age <= 44)
//		{
//			printf("青年\n");
//		}
//		else if (age <= 59)
//		{
//			printf("中老年\n");
//		}
//		else if (age <= 89)
//		{
//			printf("老年\n");
//		}
//		else 
//		{
//			printf("老寿星\n");
//		}
//	}
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//	
//}
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;

}