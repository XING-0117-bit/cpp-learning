#define _CRT_SECURE_NO_WARNINGS 
//练习：输入任意一个正整数值，计算除3之后的余数,
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 3 != 0)
//		printf("余数是%d\n", i % 3);
//	else
//		printf("余数是%d\n", 0);
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i % 3)
//	{
//	case 1:
//		printf("余数是%d", 1);
//		break;
//	case 2:
//		printf("余数是%d", 2);
//		break;
//	case 0:
//		printf("余数是%d", 0);
//		break;
//	}
//	return 0;
//}
//输⼊⼀个1~7的数字，打印对应的星期⼏
//例如：
//输⼊：1 输出：星期⼀
//输⼊：2 输出：星期⼆
//输⼊：3 输出：星期三
//输⼊：4 输出：星期四
//输⼊：5 输出：星期五
//输⼊：6 输出：星期六
//输⼊：7 输出：星期天

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default :
//		printf("输入错误，请重新输入\n");
//	}
//	return 0;
//}
//
//1. 输⼊1~5，输出的是“⼯作⽇”;
//2. 输⼊6~7，输出“休息⽇
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//	case 6:
//	case 7:
//		printf("休息日\n");
//	default:
//			printf("输入错误，请重新输入\n");
//	}
//	return 0;
//}
//练习：在屏幕上打印 1~10 的值
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4 3 2 1
//输⼊：521，输出：1 2 5
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i != 0)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//	}
//	return 0;
//}
//练习：在屏幕上打印1~10的值
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//练习1：
//计算1~100之间3的倍数的数字之和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum = sum + i;
//		printf("%d", sum);
//
//	}
//	return 0;
//}