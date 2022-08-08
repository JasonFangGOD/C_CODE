//#define _CRT_SECURE_NO_WARNINGS
//#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 9
#define Col 9
#define EASY_COUNT 10//À×¸öÊý


#define Rows Row+2
#define Cols Col+2


void InitBoard(char board[Rows][Cols],int rows,int cols,char set);
void DisplayBoard(char board[Rows][Cols],int row,int col);
void SetMine(char board[Rows][Cols],int row,int col);
void FindMine(char mine[Rows][Cols], char show[Rows][Cols],int row,int col);