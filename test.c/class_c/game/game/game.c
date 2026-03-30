#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
#include<stdio.h>
#include<stdlib.h>
 void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
 void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		int j = 0;
		for (j = 1; j <=col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
 void SetMine(char board[ROWS][COLS],int row,int col)
 {
	 int count = EASY_COUNT;
	while(count)
	{
		 int x = rand() % row + 1;
		 int y = rand() % col + 1;
		 if (board[x][y] == '0')
		 {
			 board[x][y] = '1';
			 count--;
		 }
	 }

 }
 int GetMineCount(char mine[ROWS][COLS], int x, int y)
 {
	 return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x][y - 1] - 8 * '0');
 }
 void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
 {
	 int x = 0;
	 int y = 0;
	 int win = 0;
	 while (win < row * col - EASY_COUNT)
	 {
		 printf("ÇëÊäÈë×ø±ê\n");
		 scanf("%d %d", &x, &y);
		 if (x >= 1 && x <= row && y >= 1 && y <= col)
		 {
		 if (mine[x][y] == '1')
		 {
			 printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
			 Displayboard(mine, ROW, COL);
			 break;
		 }
		 else
		 {
			 int count = GetMineCount(mine, x, y);
			 show[x][y] = count + '0';
			 Displayboard(show, ROW, COL);
		 }
	     }
		 else
		 {
			 printf("ÊäÈë´íÎó\n");
		 }

	 }
	 if (win ==row * col - EASY_COUNT)
	 {
		 printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");
		 Displayboard(mine ,ROW, COL);
	 }
	 
 }