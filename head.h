#pragma once
#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
char arr[20][20];//存放开启音乐的字符串
char arry[20][20];//存放关闭音乐的字符串
int flag ;//判断是否需要有关闭音乐的操作
int save ;//关闭那一首音乐

void menu();
void playmusic();