#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"

extern int flag ;
extern int save ;



void menu()
{
	HANDLE onhand = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(onhand, 0x7);
	printf("********************************************\n");
	printf("****************    0:退出      ************\n");
	printf("****************    1:播放      ************\n");
	printf("****************    2:清屏      ************\n");
	printf("********************************************\n");
}
void playmusic()
{
	int n;
	printf("请选择音乐->");
	scanf("%d", &n);
	if (flag == 0)
	{
		mciSendStringA(arr[n-1], 0, 0, 0);
		save = n-1;
		flag++;
	}
	else
	{
		mciSendStringA(arry[save], 0, 0, 0);
		mciSendStringA(arr[n-1], 0, 0, 0);
		save = n-1;
	}
}

void printfthink()
{
	float x, y, a;
	
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, 0xc);
	for ( y = 1.5f; y > -1.0f; y -= 0.1f)
	{
		for ( x = -1.5f; x < 1.5f; x += 0.05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
		}
		printf("\n");
		Sleep(25);
	}
	printf("\t\t   感谢使用！欢迎下次使用。\n");
	printf("\t    意见邮箱：liulooklandscape@outlook.com\n");
}



//void loadmusic(char* directory)
//{
//	assert(directory);
//	DIR* dir;
//	struct dirent* ent;
//	if ((dir = opendir(directory)) != NULL) {
//		while ((ent = readdir(dir)) != NULL) {
//			if (strstr(ent->d_name, ".mp3") || strstr(ent->d_name, ".wav")) {
//				printf("Found music file: %s/%s\n", directory, ent->d_name);
//			}
//		}
//		closedir(dir);
//	}
//	else {
//		perror("Could not open directory");
//	}
//	
//}