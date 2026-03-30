//#define _CRT_SECURE_NO_WARNINGS 
//#define EASY_COUNT 10
//#define ROW 9
//#define COL 9
//
//#define ROWS ROW+2
//#define COLS COL+2
//
//void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
//void Displayboard(char board[ROWS][COLS],int row,int col);
//
//void SetMineboard(char board[ROWS][COLS], int row, int col);
//void FindMineboard(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);


#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);

void Setmineboard(char board[ROWS][COLS], int row, int col);
void Findmineboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);