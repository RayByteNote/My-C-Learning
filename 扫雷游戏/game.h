#pragma once

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define easy 10

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void Initboard(char board[ROWS][COLS], int r, int c, char set);

void Display(char board[ROWS][COLS], int r, int c);

void Setmine(char mine[ROWS][COLS],int r,int c);

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int r,int c);