#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"


//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//������ͼ
void menu()//����
{
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��     1.Play            0.Exit         ���B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("\n��Ϸ����: \n1.����ģʽΪ '���� �ո� ���� �س�';\n2.���������������ӵط�;\n3.�������ϼ�ΪӮ\n");
}
//   |   |   ��������
//---|---|---�ָ���
//��Ϸ�����㷨ʵ��
void game()//Row-�� Col-��
{
	//����-���������Ϣ-board-����
	char board[Row][Col] = {0};//��������
	//��ʼ������-initialize-��ʼ��
	Initboard(board, Row, Col);//ȫ���ո�
	//��ӡ����-display-��ʾ
    DisplayBoard(board,Row,Col);
	//����
	char ret = 0;//��ʼ������ֵ
	while (1)
	{

		//AI����
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		//�������
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��.\n");
		printf("������ʼ��һ����Ϸ...");
		Sleep(1500);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("����Ӯ.\n");
	}
	else
	{
		printf("ƽ��.\n");
	}
}
void test()//��Ϸ����
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�����
		printf("\nPlase enter:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("The game beighs: \n");
			game();
			break;
		case 0://�˳���Ϸ
			printf("Game Over");
			break;
		default:
			printf("Select incorrectly, please select again. \n");//ѡ�����
			break;
		}
	} while (input);
}
//������С��Ϸ
int main()//������
{

	test();//����
	return 0;
}