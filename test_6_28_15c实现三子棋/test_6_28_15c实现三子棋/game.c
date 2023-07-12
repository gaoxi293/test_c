#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


// 初始化棋盘函数
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col-1)
				printf("|");
		}
		printf("\n");
		//2.打印列的数据
		//if(i < row-1)
		//	printf("---|---|---\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j < col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋函数
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	printf("请输入要下的坐标:>");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//判断x y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
			printf("坐标超过棋盘范围，请重新输入！\n");
	}
}

// 电脑下棋函数
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row; // % row之后，余数只会是0-row的范围
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//IsFull 函数 返回1表示棋盘满了，0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

// 判断输赢函数
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	// 判断行有没有3个相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	// 判断列有没有3个相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	// 判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	// 判断是否平局
	if (1 == IsFull(board, ROW, COL))
		return 'Q';
	return 'C';
}