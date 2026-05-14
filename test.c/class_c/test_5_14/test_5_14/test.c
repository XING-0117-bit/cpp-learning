#define _CRT_SECURE_NO_WARNINGS 
////数组指针是存放数组的地址
//#include<stdio.h>
//void test(int (*pa)[5], int r, int y)
//{
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < y;j++)
//		{
//			printf("%d", *((*pa+i)+j));
//		}printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,5,6,7,8,9 };
//	test(arr, 3, 5);
//	return 0;
//
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int r=Add(x, y);
//	printf("%p", Add);
//	return 0;
//}
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int(*pr)(int a, int b) = Add;
//	printf("%d", (*pr)(2, 4));
//	printf("%d", pr(2, 4));
//	return 0;
//}
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int r = 0;
	int (*parr[4])(int x,int y) = { NULL,Add};
	do
	{
		
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入数值\n");
			scanf("%d %d", &x, &y);
			int r = parr[input](x, y);
			printf("%d", r);
		}
	} while (input);

}