#include "SeqList.h"

void SLTest01()
{
	SL s1;
	SLInit(&s1);
	
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushFront(&s1, 9);
	SLPushFront(&s1, 8);
	SLPushFront(&s1, 7);
	SLPrint(&s1);
	SLPopBack(&s1);
	SLPrint(&s1);
	SLPopFront(&s1);
	SLPrint(&s1);
}

void Contect02() {
	SL con;
}

int main() {
	SLTest01();
	Contect02();
	return 0;
}

