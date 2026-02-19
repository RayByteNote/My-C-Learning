#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void Initboard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0;j < c; j++)
		{
			board[i][j] = set;
		}
	}
}


void Display(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷---------\n");
	//打印列号
	for (i = 0; i <= r; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char mine[ROWS][COLS], int r, int c)
{
	int count = easy;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int jisuan(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int b = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x+i][y+j] == '1')
			{
				b++;
			}
		}
	}
	return b;
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<r*c-easy)
	{
		printf("请输入坐标:");
		scanf("%d %d",&x,&y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你输了\n");
				Display(mine, ROW, COL);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					int c = jisuan(mine, x, y);//统计x，y周围有几个雷
					show[x][y] = c + '0';
					Display(show, ROW, COL);
					win++;
				}
				else
				{
					printf("排查过了，请重试\n");
				}
			}
		}
		else
		{
			printf("输入错误，请重试\n");
		}
	}
	if (win == r * c - easy)
	{
		printf("恭喜你,排雷成功\n");
		Display(mine, ROW, COL);
	}
}