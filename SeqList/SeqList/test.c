#define _CRT_SECURE_NO_WARNINGS 1
//主文件，测试代码运行
#include"SeqList.h"

int main(){
	SL sl;
	Init(&sl);
	PushFront(&sl, 5);
	PushBack(&sl, 6);
	return 0;
}