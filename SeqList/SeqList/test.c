#define _CRT_SECURE_NO_WARNINGS 1
//主文件，测试代码运行
#include"SeqList.h"

int main(){
	SL sl;
	Init(&sl);
	PushBack(&sl, 3);
	PushBack(&sl, 4);
	PushFront(&sl, 5);
	PushBack(&sl, 6);
	Print(sl);

	PopFront(&sl);
	Print(sl);
	PopBack(&sl);
	Print(sl);

	Find(sl, 5);
	Find(sl, 3);

	Revise(&sl, 2, 0);
	Revise(&sl, 3, 0);

	return 0;
}