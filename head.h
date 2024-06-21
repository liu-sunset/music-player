#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<mmsystem.h>
#include<assert.h>



#pragma comment(lib,"winmm.lib")
#define summusic sum//音乐总数

char arr[20][20];//存放开启音乐的字符串
char arry[20][20];//存放关闭音乐的字符串
int flag ;//判断是否需要有关闭音乐的操作
int save ;//关闭那一首音乐
int sum ;//歌曲总数

void menu();//菜单
void playmusic();//播放音乐
void printfthink();//爱心打印
int listFiles(const char* dirPath, const char* extension);//检查文件夹下MP3文件个数
