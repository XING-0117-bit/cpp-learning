
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = a/b;
//	d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	return 0;
//}
////#include<stdio.h>
////int main()
////{
////	int a, b;
////	while (scanf("%d %d", &a, &b) != EOF)
////	{
////		if (a==b)
////		{
////			printf("%d=%d\n", a, b);
////		}
////
////		else if (a > b)
////		{
////			printf("%d>%d\n", a, b);
////		}
////		else
////		{
////			printf("%d<%d\n", a, b);
////		}
////	}
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a > 0 && a % 5 == 0)
//	{
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a, i;
	while(scanf_s("%d", &a)!=EOF)
	for (i = 0; i < a; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}