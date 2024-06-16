#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"
extern int flag ;
extern int save ;


int main()
{
	flag = 0;
	save = 0;
	int i = 0;
	
	for (i = 0; i < 7; i++)
	{
		sprintf(arr[i], "play back%d.mp3", i + 1);
	}
	for (i = 0; i < 7; i++)
	{
		sprintf(arry[i], "stop back%d.mp3", i + 1);
	}
	int n;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			playmusic();
			break;
		case 0:
		{
			printf("即将退出！\n");
			Sleep(3000);
		}
			break;
		case 3:
			system("cls");
			break;
		default:
			printf("选择错误！\n");
		}
	} while (n);
}