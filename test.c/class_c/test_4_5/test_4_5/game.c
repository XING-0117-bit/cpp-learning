#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"
#include<time.h>
#include<stdlib.h>
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
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
void Setmineboard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
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
void Findmineboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	do
	{

	}while()
}