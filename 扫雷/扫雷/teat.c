#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
#include"game.h"


void menu()
{
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��     1.Play            0.Exit         ���B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B�B`�����B��`��.���B�B`�����B��B\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[Rows][Cols] = { 0 };
	//2.�Ų���׵���Ϣ
	char show[Rows][Cols] = { 0 };
	//��ʼ��
	InitBoard(mine,Rows, Cols,'0');
	InitBoard(show, Rows, Cols,'*');
	//��ӡ����
	//DisplayBoard(mine,Row,Col);
	DisplayBoard(show, Row, Col);
	//������
	SetMine(mine,Row,Col);
	//ɨ��
	//DisplayBoard(mine, Row, Col);//�鿴������
	FindMine(mine, show, Row, Col);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ.\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
		
	} while (input);
}

int main()
{
	test();
	return 0;
}