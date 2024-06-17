#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"
extern int flag ;
extern int save ;


int main()
{
	/*FILE* config = fopen("path.txt", "r");
	if (config == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	else
	{
		char arr[255];
		if (fgets(arr, sizeof(arr), config) != NULL)
		{
			loadmusic(arr);
			fclose(config);
			config = NULL;
		}
		else
		{
			fclose(config);
			config = NULL;
			return 1;
		}
	}*/
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
		printf("ÇëÑ¡Ôñ->");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			playmusic();
			break;
		case 0:
		{
			printf("¼´½«ÍË³ö£¡\n");
			printfthink();
			Sleep(3000);
		}
			break;
		case 3:
			system("cls");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¡\n");
		}
	} while (n);
	system("psuse");
	return 0;
}