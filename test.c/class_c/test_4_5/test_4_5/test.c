#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');

	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);

	Setmineboard(mine, ROWS, COL);
	Displayboard(mine, ROW, COL);
	Findmineboard(mine,show, ROW, COL);
}
void test()
{
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}