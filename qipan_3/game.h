#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#define COW 3
#define ROL 3

void Intiboart(char boart[COW][ROL], int cow, int rol);
void displayboart(char boart[COW][ROL], int cow, int rol);
void palymove(char boart[COW][ROL], int cow, int rol);
void compmove(char boart[COW][ROL], int cow, int rol);
//≈–∂œ4÷÷”Œœ∑◊¥Ã¨∑µªÿ
char IsWin(char boart[COW][ROL],int cow,int rol);