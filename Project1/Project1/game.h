#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include <time.h>

// 声明函数
void InitBoard(char board[ROW][COL],int row, int col);

void DisplayBoard(char board[ROW][COL],int row,int col);

void PlayerMove(char board[ROW][COL],int row,int col);

void ComputerMove(char board[ROW][COL],int row,int col);

/*
判断输赢函数 返回给我们四种状态
玩家赢 - '*'
电脑赢 - '#'
平局   - 'Q'
继续   - 'C'
*/

char IsWin(char board[ROW][COL],int row, int col);