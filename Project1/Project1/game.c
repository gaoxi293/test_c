#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' '; // 注意此处打印空格 不要写成双引号
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
        // 打印一行
		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		// 优化一下
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col - 1)
				printf("|");
		}
		printf("\n");
		// 打印分割行
		//if(i < row - 1)
		//	printf("---|---|---\n");
		// 优化一下
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

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)  // 下棋输入坐标是一个循环
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		// 判断x y 坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ') // 用户角度的坐标（1，1）其实是数组中的（0，0）
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
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row; // 模上行数之后 范围在 0 - row-1 之内
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 返回1表示棋盘满了，返回0表示棋盘没满
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
				return 0; //棋盘没满
			}
		}
	}
	return 1; // 棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	// 判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	// 判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i]== board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	// 判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	// 判断是否平局 --- 没有人赢而且棋盘满了
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}