#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//声明棋盘初始化函数
void InitBoard(char board[ROW][COL], int row, int col);

//声明打印棋盘函数
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋函数
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋函数
void ComputerMove(char board[ROW][COL],int row,int col);

//告诉我们四种游戏的状态
//电脑赢 #    玩家赢 *   平局 Q    都没赢 C
char IsWin(char board[ROW][COL],int row,int col);
