#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("是春天\n");
//	}
//	else
//	{
//		printf("不是春天\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("是冬天\n");
//	}
//	else
//	{
//		printf("不是冬天\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////#include <stdio.h>
////int main()
////{
////	int flag = 0;
////	if (!flag)
////	{
////		printf("do something\n");
////	}
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("是闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) ||( year % 400 == 0))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("余数是0\n");
//	}
//	else if (num % 3 == 1)
//
//	{
//		printf("余数是1\n");
//	}
//	else 
//	{
//		printf("余数是2\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 1:
//	{
//		printf("余数是1\n");
//		break;
//	}
//	case 0:
//	{
//		printf("余数是0\n");
//		break;
//	}
//	case 2:
//	{
//		printf("余数是2\n");
//		break;
//	}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	{
//		printf("工作日\n");
//		break;
//	}
//	case 6:
//	case 7:
//	{
//		printf("休息日\n");
//		break;
//	}
//	}
//		return 0;
//}
//#include<stido.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
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
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	default:
		printf("输入错误\n");
		break;

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	{
		printf("工作日\n");
		break;
	}
	case 6:
	case 7:
	{
		printf("休息日\n");
		break;
	}
	}
	return 0;
}