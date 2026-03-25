#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*****************\n");
//	printf("******1.play*****\n");
//	printf("******0.退出游戏*\n");
//	printf("******输入错误***\n");
//}
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	printf("请输入\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess == r)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
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
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//	
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
//int r = rand() % 100 + 1;
//#include<stdio.h>
//int main()
//{
//	int r = rand() % 101 + 100;
//	printf("%d", r);
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("******1.play*******\n");
//	printf("*******0.退出游戏**\n");
//	printf("********输入错误***\n");
//}
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	int count = 5;
//	printf("请输入\n");
//	while (count)
//	{
//		printf("你还有%d次机会\n", count);
//		scanf("%d", &guess);
//		if (guess == r)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//			
//			count--;
//			
//		}
//		else
//		{
//			printf("猜小了\n");
//			count--;
//			
//		}
//	}
//	if (count == 0)
//	{
//		printf("你失败了,正确值是%d\n",r);
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//void init(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int n)
//{
//	for (int i = 0; i < n / 2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[n - 1 - i];
//		arr[n - 1 - i] = temp;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("原始数组: ");
//	print(arr, sz);       // 注意：这里只打印前9个元素（因为sz少1）
//
//	init(arr, sz);
//	printf("初始化后: ");
//	print(arr, sz);
//
//	// 重新赋值（只给前9个元素赋值）
// 
//	for (int i = 0; i < sz; i++) {
//		arr[i] = i + 1;
//	}
//	printf("重新赋值: ");
//	print(arr, sz);
//	
//
//	reverse(arr, sz);
//	printf("逆置后: ");
//	print(arr, sz);
//
//	return 0;
//}
