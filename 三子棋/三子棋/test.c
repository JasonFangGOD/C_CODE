#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"game.h"


//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//棋盘样图
void menu()//函数
{
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·     1.Play            0.Exit         ·˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙˙`··˙☆`·.·˙˙`··˙☆˙\n");
	printf("\n游戏规则: \n1.下棋模式为 '数字 空格 数字 回车';\n2.不能下载已有棋子地方;\n3.三子连上即为赢\n");
}
//   |   |   数组内容
//---|---|---分割线
//游戏整个算法实现
void game()//Row-行 Col-列
{
	//数组-存放棋盘信息-board-棋盘
	char board[Row][Col] = {0};//棋盘行列
	//初始化棋盘-initialize-初始化
	Initboard(board, Row, Col);//全部空格
	//打印棋盘-display-显示
    DisplayBoard(board,Row,Col);
	//下棋
	char ret = 0;//初始化返回值
	while (1)
	{

		//AI下棋
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断玩家是否赢
		ret = IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		//玩家下棋
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断玩家是否赢
		ret=IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了.\n");
		printf("即将开始新一轮游戏...");
		Sleep(1500);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("电脑赢.\n");
	}
	else
	{
		printf("平局.\n");
	}
}
void test()//游戏功能
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单函数
		printf("\nPlase enter:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("The game beighs: \n");
			game();
			break;
		case 0://退出游戏
			printf("Game Over");
			break;
		default:
			printf("Select incorrectly, please select again. \n");//选择错误
			break;
		}
	} while (input);
}
//三子棋小游戏
int main()//主函数
{

	test();//函数
	return 0;
}