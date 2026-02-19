#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********** 1.play **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//埋雷的数组
	char show[ROWS][COLS] = {0};//展示的数组
	//棋盘初始化
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//埋雷
	Setmine(mine,ROW,COL);
	//打印棋盘
	//Display(mine, ROW, COL );
	Display(show, ROW, COL);
	//排查雷
	Findmine(mine,show, ROW, COL);

}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}

	} while (input);
	return 0;
}