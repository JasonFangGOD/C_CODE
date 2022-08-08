#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"


//������Ϣ
void Initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';//��ʼ������boardΪ�ո�
		}
	}
}
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//������ͼ
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		//��ӡһ������
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);//*** *** ***
			if (j < col - 1)            //   |   |
				printf("|");            //*** *** ***
		}                               //   |   |   
		printf("\n");
		//��ӡ�ָ���	
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
	printf("�����:>\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�����±��0��ʼ
		{
			if (board[x - 1][y - 1] == ' ')//(1,1)(1,2)=>(x-1,y-1)=>(0,0)(0,1)
			{
				board[x - 1][y - 1] = '*';//������λ�ô�' '�滻Ϊ*
				break;
			}
			else
			{
				printf("�����걻ռ��.\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�������������.\n");
		}
		//break;
	}
}
void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
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
//����1��ʾ��������
//����0��ʾû��
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
				return 0;//����
			}
		}
	}
	return 1;//û��
}
char IsWin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)//������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0;i < col;i++)//������
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}//�����ж�˭Ӯ
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, Row, Col))
	{
		return 'Q';
	}
	return 'C';
}