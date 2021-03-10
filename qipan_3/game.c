#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Intiboart(char boart[COW][ROL], int cow, int rol)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < cow; i++)
	{
		
		for (j = 0; j < rol; j++)
		{
			boart[i][j] = ' ';

		}

	}

}
//void dispalyboart(char boart[COW][ROL], int cow, int rol)
//{
//	int i = 0;
//	for (i = 0; i < cow; i++)
//	{
//		   int j;
//		   for (j = 0; j < rol; j++)
//		   {
//			   printf(" %c ", boart[i][j]);
//			   if (j < rol - 1)
//			   {
//				   printf("|");
//			   }
//		   }
//		   printf("\n");
//		   if (i < cow - 1)
//		   {
//			   for (j = 0; j < cow; j++)
//			   {
//				   printf("---");
//				   if (j<cow-1)
//				   printf("|");
//			   }
//		   }printf("\n");
//	}
//	
//}
//

void displayboart(char boatr[COW][ROL], int cow, int rol)
{
	int i = 0;
	for (i = 0; i < cow; i++)
	{
		int j;
		for (j = 0; j < rol; j++)
		{
			printf(" %c ", boatr[i][j]);
			if (j < rol - 1)
			{
				printf("|");

			}
			

		}
		printf("\n");
		if (i < cow - 1)
		{
			for (j = 0; j < cow; j++)
			{
				printf("---");
				if (j < cow - 1)
				{
					printf("|");
				}
				
			}
			printf("\n");
		}

	}

}

//玩家走
void palymove(char boart[COW][ROL], int cow, int rol)
{
	int x = 0;
	int y = 0;
	printf("玩家走->");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= cow && y >= 1 && y <= rol)
		{
			//判断坐标是否合法
			if (boart[x - 1][y - 1] == ' ')
			{
				boart[x - 1][y - 1] = '*';
				break;
			}
			//判断坐标是否被占用
			else
			{
				printf("坐标被占用\n");
			}

		}
		//输入非法重新输入;
		else
		{
			printf("非法输入\n");
			break;
		}

	}
}
//电脑走
void compmove(char boart[COW][ROL], int cow, int rol)
{
	
	int x = 0; 
	int y = 0; 
	printf("电脑走");
	while (1)
	{
		x = rand() % rol;
		y = rand() % cow;
		if (boart[x][y] == ' ')
		{
			boart[x][y] = '#';
			break;
		}

	}
	printf("\n");


}
//判断是否为空棋盘  
//返回1是满了，返回0没有满
int IsFull(char boart[COW][ROL], int cow, int rol)
{
	int i = 0;
	int j;
	for (i = 0; i < cow; i++)
	{
		
		for (j = 0; j < rol; j++)
		{
			if (boart[i][j] == ' ')
			{
				return 0;
			}
		}

	}

	return 1;
}

//判断游戏的四种状态
char IsWin(char boart[COW][ROL], int cow, int rol)
{
	int i = 0; 
	//横三行判定
	for (i = 0; i < cow; i++)
	{
		if (boart[i][0] == boart[i][1] && boart[i][1] == boart[i][2] && boart[i][1] != ' ')
		{
			return boart[i][1];
		}
	}
	//竖三列判定
	for (i = 0; i < rol; i++)
	{
		if (boart[0][i] == boart[1][i] && boart[1][i] == boart[2][i] && boart[1][i] != ' ')
		{
			return boart[1][i];
		}
	}
	//对角线判断
	if (boart[0][0] == boart[1][1] && boart[1][1] == boart[2][2] && boart[1][1] != ' ')
	{
		return boart[1][1];
	}
	if (boart[0][2] == boart[1][1] && boart[1][1] == boart[2][0] && boart[1][1] != ' ')
	{
		return boart[1][1];
	}
	//判断是否满了
	if (1 == IsFull(boart, COW, ROL))
	{
		return 'Q';
	}
	return 'C';

}