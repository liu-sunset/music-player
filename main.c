#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"
extern int flag ;
extern int save ;


int main()
{
	const char* directory = "D:\\cԴ����\\code_vs\\play_music"; // �滻Ϊʵ��Ŀ¼·��
	const char* extension = "mp3"; // ָ����չ��
	int sum=0;
		sum = listFiles(directory, extension);//mp3�ļ�����
		if (sum == 0)
		{
			printf("��Ǹ��Ŀǰ��û���ڽ�MP3�ļ�\n");
			printfthink();
	}
		else
		{
			flag = 0;
			save = 0;
			int i = 0;

			for (i = 0; i < summusic; i++)
			{
				sprintf(arr[i], "play back%d.mp3", i + 1);
			}
			for (i = 0; i < summusic; i++)
			{
				sprintf(arry[i], "stop back%d.mp3", i + 1);
			}
			int n;
			do
			{
				menu();
				printf("��ѡ��->");
				scanf("%d", &n);
				switch (n)
				{
				case 1:
					playmusic();
					break;
				case 0:
				{
					printf("�����˳���\n");
					printfthink();
					Sleep(3000);
				}
				break;
				case 3:
					system("cls");
					break;
				default:
					printf("ѡ�����\n");
				}
			} while (n);
		}
	
	system("psuse");
	return 0;
}



