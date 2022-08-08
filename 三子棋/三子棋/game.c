#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"


//棋盘信息
void Initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';//初始化数组board为空格
		}
	}
}
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//棋盘样图
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		//打印一行数据
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);//*** *** ***
			if (j < col - 1)            //   |   |
				printf("|");            //*** *** ***
		}                               //   |   |   
		printf("\n");
		//打印分割行	
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}
void PlayerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)//数组下标从0开始
		{
			if (board[x - 1][y - 1] == ' ')//(1,1)(1,2)=>(x-1,y-1)=>(0,0)(0,1)
			{
				board[x - 1][y - 1] = '*';//将坐标位置从' '替换为*
				break;
			}
			else
			{
				printf("该坐标被占用.\n");
			}
		}
		else
		{
			printf("坐标不合法，请重新输入.\n");
		}
		//break;
	}
}
void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{	
			board[x][y] = '#';
			break;
		}
	}

}
//返回1表示棋盘满了
//返回0表示没满
int IsFull(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//满了
			}
		}
	}
	return 1;//没满
}
char IsWin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)//横三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0;i < col;i++)//竖三列
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}//以上判断谁赢
	//判断是否平局
	if (1 == IsFull(board, Row, Col))
	{
		return 'Q';
	}
	return 'C';
}