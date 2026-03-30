#define _CRT_SECURE_NO_WARNINGS 
#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

 void Initboard(char board[ROWS][COLS], int rows, int cols, char set);

 void Displayboard(char board[ROWS][COLS], int row, int col);

 void SetMine(char board[ROWS][COLS], int row, int col);
 void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
