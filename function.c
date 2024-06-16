#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"

extern int flag ;
extern int save ;



void menu()
{
	printf("********************************************\n");
	printf("****************    1:²¥·Å      ************\n");
	printf("****************    2:ÍË³ö      ************\n");
	printf("****************    3:ÇåÆÁ      ************\n");
	printf("********************************************\n");
}
void playmusic()
{
	int n;
	printf("ÇëÑ¡ÔñÒôÀÖ->");
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