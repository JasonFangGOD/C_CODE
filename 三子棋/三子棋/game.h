#define Row 3
#define Col 3
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


//函数声明
void Initboard(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col],int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);

//四种游戏状态
//玩家赢 '*'
//电脑赢 '#'
//平局 Q
//继续 C
char IsWin(char board[Row][Col], int row, int col);