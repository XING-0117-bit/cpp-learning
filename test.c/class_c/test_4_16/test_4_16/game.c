#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <=row; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void SetMineBoard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand () % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		scanf("%d %d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
	
}