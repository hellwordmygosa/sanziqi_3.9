#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void stat()
{
	printf("**************************\n");
	printf("****1.pay     0.exit******\n");
	printf("**************************\n");
}

void start()
{
	char ret = 0;
	//建立数组
	char boart[COW][ROL] = { 0 };
	//初始化数组
	Intiboart(boart, COW, ROL);
	//建立表格
	displayboart(boart, COW, ROL);
	//下棋
	while (1)
	{
		//玩家走
		palymove(boart, COW, ROL);
		displayboart(boart, COW, ROL);
		//判断玩家是否赢
		ret=IsWin(boart,COW,ROL);//                                      //判断输赢//*号玩家赢，#号电脑赢,Q平局，C继续,
		if (ret != 'C')
		{
			break;
		}
		compmove(boart, COW, ROL);
		displayboart(boart, COW, ROL);//判断电脑是否赢
		ret = IsWin(boart,COW,ROL);
		if (ret != 'C')
		{
			break;
		}	
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	
}

void game()
{
	int puin = 0;
	srand((unsigned int)time(NULL));
	do
	{
		stat();
		printf("请输入选择->");
		scanf("%d", &puin);
		switch (puin)
		{
			case 1:
			{
					  printf("游戏开始\n");
					  start();
					  break;
			}
			case 0:
			{
					  printf("退出游戏\n");
					  break;
			}
			default:
			{
					   printf("输入错误请重新输入\n");
					   break;
			}
		}
	} while (puin);


	


}

int main()
{
	
	game();



	system("pause");
	return 0;
}