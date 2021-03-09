#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void meue()
{
	printf("******************************\n");
	printf("*****1.pay  0.exit************\n");
	printf("******************************\n");
}

void start()
{
	char boart[COW][ROL] = { 0 };
	//初始化棋盘
	Initboart(boart, COW, ROL);
	//打印棋盘
	displayboart(boart,COW,ROL);	
//      |    |
// -----|----|----
//      |    |    
// -----|----|----
//      |    |    



}

void game()
{
	int ingput = 0;
	do
	{
		meue();
		printf("请选择游戏->");
		scanf("%d", &ingput);
		switch (ingput)
		{
		case 1:
			printf("游戏开始\n");
			start();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (ingput);

}

int main()
{

	game();

	system("pause");
	return 0;
}