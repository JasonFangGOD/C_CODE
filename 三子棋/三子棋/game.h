#define Row 3
#define Col 3
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


//��������
void Initboard(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col],int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);

//������Ϸ״̬
//���Ӯ '*'
//����Ӯ '#'
//ƽ�� Q
//���� C
char IsWin(char board[Row][Col], int row, int col);