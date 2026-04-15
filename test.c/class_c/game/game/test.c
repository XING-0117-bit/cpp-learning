#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf("******   1.play  ****\n");
	printf("******    0.exit  ***\n");
	printf("*********************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	Initboard(show, ROWS, COLS,'*');
	Initboard(mine, ROWS, COLS,'0');

	Displayboard(show, ROW, COL);
	//Displayboard(mine, ROW, COL);

	SetMine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);

	FindMine(mine,show, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("«Î ‰»Î\n");
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
}
int main()
{
	test();
	return 0;
}