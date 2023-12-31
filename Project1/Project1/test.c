#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}

void game()
{
	char ret = 0;
	// 数组用来存放玩家走出的棋盘信息
	char board[ROW][COL] = {0};
	// 初始化棋盘
	InitBoard(board,ROW,COL);
	// 打印棋盘
	DisplayBoard(board,ROW,COL);
	// 下棋
	while (1)
	{
		// 玩家下
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		// 判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 电脑下
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		// 判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int intput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (intput);
}

int main()
{
	test();
	return 0;
}