#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<sys/types.h>
#include<string.h>
#include<mmsystem.h>
#include<assert.h>

struct dirent {
	ino_t          d_ino;       // inode number
	off_t          d_off;       // offset to the next dirent
	unsigned short d_reclen;    // length of this record
	unsigned char  d_type;      // type of file
	char           d_name[256]; // filename (null-terminated)
};

#pragma comment(lib,"winmm.lib")
#define summusic 7//��������

char arr[20][20];//��ſ������ֵ��ַ���
char arry[20][20];//��Źر����ֵ��ַ���
int flag ;//�ж��Ƿ���Ҫ�йر����ֵĲ���
int save ;//�ر���һ������

void menu();//�˵�
void playmusic();//��������
void printfthink();//���Ĵ�ӡ
void loadmusic(char* directory);//���������ļ�