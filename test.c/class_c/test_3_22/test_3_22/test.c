#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int init(int arr)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = {};
//	init(arr);
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******************\n");
//	printf("******请输入******\n");
//	printf("******1.play******\n");
//	printf("******0.退出******\n");
//	printf("******************\n");
//}
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	printf("请输入\n");
//	while (1)
//	{
//
//		scanf("%d", &guess);
//		if (r == guess)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (r > guess)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜大了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//		{
//			printf("输入错误\n");
//		}
//		}
//	} while (input);
//
//	return 0;
//
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************\n");
	printf("*******1.play******\n");
	printf("*******0.退出游戏**\n");
	printf("*******************\n");
}
void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	printf("请输入\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess == r)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (guess > r)
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
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;

		}

	} while (input);
	return 0;
}