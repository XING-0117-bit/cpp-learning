#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<time.h>
void menu()
{
	printf(" *******************\n");
	printf(" *****请选择.*******\n");
	printf(" *****1.开始游戏****\n");
	printf(" *****0.退出游戏****\n");
}
void game()
{
	int t = 0;
	t = rand() % 100 + 1;
	int r = 0;
	while(1)
	{
	printf("请输入数字\n");
	scanf("%d", &r);
	
	
		if (r == t)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (r > t)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}

}
int main()
{	
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
		/*do
		{

	case 0:
	{
		printf("游戏结束");
		break;
	}
	case 1:
	{
		game();
		break;
	}
	default:
	{
		printf("输入错误\n");
		break;
	}

		} while (input);
	}
		
	
	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//    unsigned int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a == b && a == c && b == c)
//
//        {
//            printf("Equilateral triangle!\n");
//        }
//        else if (a == b || b == c || a == c)
//        {
//            printf("Isosceles triangle!\n");
//        }
//        else
//        {
//            printf("Ordinary triangle!\n");
//        }
//    }
//
//
//    else
//    {
//        printf("Not a triangle!\n");
//    }
//
//    return 0;
//
//
//}
//关机程序
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将在一分钟之后关机，输入“我是猪”取消关机\n");
//	scanf("%s", &ch);
//	if (strcmp(ch, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("还算配合，取消关机\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//	do
//	{
//		printf("你的电脑将在一分钟之后关机，输入“我是猪”取消关机\n");
//		scanf("%s", &ch);
//		if (strcmp(ch, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("还算配合，关机已取消\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (1);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr2[5] = { 1,2,3,4,5 };
//	for (i = 0; i <5; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[20] = { 0 };
//	printf("%zd", sizeof(arr1[20]/arr1[0]));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[5] = { 0 };
//	for (j = 0; j < 5; j++)
//	{
//		scanf("%d", &arr1[j]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}
