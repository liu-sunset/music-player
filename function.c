#define  _CRT_SECURE_NO_WARNINGS
#include"head.h"

extern int flag ;
extern int save ;



void menu()
{
	HANDLE onhand = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(onhand, 0x7);
	printf("********************************************\n");
	printf("****************    0:�˳�      ************\n");
	printf("****************    1:����      ************\n");
	printf("****************    2:����      ************\n");
	printf("********************************************\n");
}
void playmusic()
{
	int n;
	while (1)
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, 0x7);
		printf("��ѡ������->");
		scanf("%d", &n);
		if (n > sum)
		{
			HANDLE ihon = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(ihon, 0xc);
			printf("ѡ�����������Χ��\n");
		}
		else
		{
			if (flag == 0)
			{
				mciSendStringA(arr[n - 1], 0, 0, 0);
				save = n - 1;
				flag++;
			}
			else
			{
				mciSendStringA(arry[save], 0, 0, 0);
				mciSendStringA(arr[n - 1], 0, 0, 0);
				save = n - 1;
			}
			break;
		}
		
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
	printf("\t\t   ��лʹ�ã���ӭ�´�ʹ�á�\n");
	printf("\t    ������䣺liulooklandscape@outlook.com\n");
}

int listFiles(const char* dirPath, const char* extension) 
{
	char searchPath[MAX_PATH];
	WIN32_FIND_DATA findData;
	HANDLE hFind;

	// ��������·��
	snprintf(searchPath, MAX_PATH, "%s\\*.%s", dirPath, extension);

	// ��ʼ����
	hFind = FindFirstFile(searchPath, &findData);
	if (hFind == INVALID_HANDLE_VALUE) {
		printf("No %s files found in directory: %s\n", extension, dirPath);
		return;
	}

	// �����ҵ����ļ�
	int count = 0;
	do {
		if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			count++;
		}
	} while (FindNextFile(hFind, &findData) != 0);

	// �ر��������
	FindClose(hFind);
	return count;
}

