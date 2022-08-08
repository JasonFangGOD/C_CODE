#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include"game.h"




void InitBoard(char board[Rows][Cols], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[Rows][Cols], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);//�к�
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[Rows][Cols], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[Rows][Cols],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų���׵�����:> ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= Rows && y >= 1 && y <= Cols - 1)//�ж������Ƿ�Ϸ�
		{
			//����Ϸ�
			//1.�ȵ���
			if (mine[x][y] == '1')
			{
				printf("���ź���,��ը����!\n");
				DisplayBoard(mine, Row, Col);
				break;
			}
			else
			{
				//2.������
				//����x,y��������Χ8�������м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			//���겻�Ϸ�
			printf("���겻�Ϸ�������������:> ");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�!\n");
		DisplayBoard(mine, Row, Col);
	}
}