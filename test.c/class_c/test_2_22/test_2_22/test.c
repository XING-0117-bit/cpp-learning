#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 3.15;
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.15;
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("There are %d apples\n",3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%s has three apples\n", "Zhangming");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%s has %d apples\n", "Zhangming", 3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%s has %d apples\n", 3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%5d", 123);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%12f", 12.3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%+d\n", 3);
//	printf("%d\n", 4);
//	printf("%d\n", -56);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%.2f", 12.3457);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%5.2f\n", 1.3);
//	printf("%.2f", 1.3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%*.*f\n", 6, 2, 0.5);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%.5s", "Hello World\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("³É¼¨ÊÇ%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 18;
	int b = 24;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("%d", b);
	return 0;
}