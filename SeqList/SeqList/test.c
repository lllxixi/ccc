#define _CRT_SECURE_NO_WARNINGS 1
//���ļ������Դ�������
#include"SeqList.h"

int main(){
	SL sl;
	Init(&sl);
	PushFront(&sl, 5);
	PushBack(&sl, 6);
	return 0;
}