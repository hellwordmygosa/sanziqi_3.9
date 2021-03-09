#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//≥ı ºªØ∆Â≈Ã
void Initboart(char boart[COW][ROL], int cow, int rol)
{

	int i = 0;
	int j = 0;
	for (i = 0; i < cow; i++)
	{
		for (j = 0; j < rol; j++)
		{
			boart[i][j]=' ';
		}
	}

}
//¥Ú”°∆Â≈Ã
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