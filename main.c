#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"
extern int flag ;
extern int save ;


int main()
{
	const char* directory = "D:\\c源代码\\code_vs\\play_music"; // 替换为实际目录路径
	const char* extension = "mp3"; // 指定扩展名
	int sum=0;
		sum = listFiles(directory, extension);//mp3文件个数
		if (sum == 0)
		{
			printf("抱歉，目前还没有内接MP3文件\n");
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
					printfthink();
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
	
	system("psuse");
	return 0;
}



