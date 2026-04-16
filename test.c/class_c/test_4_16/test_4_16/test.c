#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	SetMineBoard(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("*********************\n");
	printf("*****   1.play  *****\n");
	printf("*****   0.exit  *****\n");
	printf("*********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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