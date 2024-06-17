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
#define summusic 7//音乐总数

char arr[20][20];//存放开启音乐的字符串
char arry[20][20];//存放关闭音乐的字符串
int flag ;//判断是否需要有关闭音乐的操作
int save ;//关闭那一首音乐

void menu();//菜单
void playmusic();//播放音乐
void printfthink();//爱心打印
void loadmusic(char* directory);//加载音乐文件