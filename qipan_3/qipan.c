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
	//��������
	char boart[COW][ROL] = { 0 };
	//��ʼ������
	Intiboart(boart, COW, ROL);
	//�������
	displayboart(boart, COW, ROL);
	//����
	while (1)
	{
		//�����
		palymove(boart, COW, ROL);
		displayboart(boart, COW, ROL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(boart,COW,ROL);//                                      //�ж���Ӯ//*�����Ӯ��#�ŵ���Ӯ,Qƽ�֣�C����,
		if (ret != 'C')
		{
			break;
		}
		compmove(boart, COW, ROL);
		displayboart(boart, COW, ROL);//�жϵ����Ƿ�Ӯ
		ret = IsWin(boart,COW,ROL);
		if (ret != 'C')
		{
			break;
		}	
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	
}

void game()
{
	int puin = 0;
	srand((unsigned int)time(NULL));
	do
	{
		stat();
		printf("������ѡ��->");
		scanf("%d", &puin);
		switch (puin)
		{
			case 1:
			{
					  printf("��Ϸ��ʼ\n");
					  start();
					  break;
			}
			case 0:
			{
					  printf("�˳���Ϸ\n");
					  break;
			}
			default:
			{
					   printf("�����������������\n");
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