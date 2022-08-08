#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
#include"game.h"


void menu()
{
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·     1.Play            0.Exit         ·˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
}
void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[Rows][Cols] = { 0 };
	//2.排查的雷的信息
	char show[Rows][Cols] = { 0 };
	//初始化
	InitBoard(mine,Rows, Cols,'0');
	InitBoard(show, Rows, Cols,'*');
	//打印棋盘
	//DisplayBoard(mine,Row,Col);
	DisplayBoard(show, Row, Col);
	//布置雷
	SetMine(mine,Row,Col);
	//扫雷
	//DisplayBoard(mine, Row, Col);//查看雷在哪
	FindMine(mine, show, Row, Col);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏.\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
		
	} while (input);
}

int main()
{
	test();
	return 0;
}