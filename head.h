#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<mmsystem.h>
#include<assert.h>



#pragma comment(lib,"winmm.lib")
#define summusic sum//��������

char arr[20][20];//��ſ������ֵ��ַ���
char arry[20][20];//��Źر����ֵ��ַ���
int flag ;//�ж��Ƿ���Ҫ�йر����ֵĲ���
int save ;//�ر���һ������
int sum ;//��������

void menu();//�˵�
void playmusic();//��������
void printfthink();//���Ĵ�ӡ
int listFiles(const char* dirPath, const char* extension);//����ļ�����MP3�ļ�����
