#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"

extern int flag ;
extern int save ;



void menu()
{
	printf("********************************************\n");
	printf("****************    1:����      ************\n");
	printf("****************    2:�˳�      ************\n");
	printf("****************    3:����      ************\n");
	printf("********************************************\n");
}
void playmusic()
{
	int n;
	printf("��ѡ������->");
	scanf("%d", &n);
	if (flag == 0)
	{
		mciSendStringA(arr[n], 0, 0, 0);
		save = n;
		flag++;
	}
	else
	{
		mciSendStringA(arry[save], 0, 0, 0);
		mciSendStringA(arr[n], 0, 0, 0);
		save = n;
	}
}