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
	//��ʼ������
	Initboart(boart, COW, ROL);
	//��ӡ����
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
		printf("��ѡ����Ϸ->");
		scanf("%d", &ingput);
		switch (ingput)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			start();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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