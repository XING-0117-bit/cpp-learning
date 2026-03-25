#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include "game.h"
#include<time.h>
void menu()
{
	printf("***********************\n");
	printf("******   1.play   *****\n");
	printf("******   0.exit   *****\n");
	printf("***********************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	

	SetMine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);
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
		case 0:
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ\n");
			break;
		}
	} while (input);
	return 0;
}