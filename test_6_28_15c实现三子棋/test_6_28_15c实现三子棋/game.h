#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//�������̳�ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//������ӡ���̺���
void DisplayBoard(char board[ROW][COL],int row,int col);

//������庯��
void PlayerMove(char board[ROW][COL], int row, int col);

//�������庯��
void ComputerMove(char board[ROW][COL],int row,int col);

//��������������Ϸ��״̬
//����Ӯ #    ���Ӯ *   ƽ�� Q    ��ûӮ C
char IsWin(char board[ROW][COL],int row,int col);
