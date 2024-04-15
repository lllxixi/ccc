#include "SeqList.h"
#include"Contact.h"

//void SLTest01()
//{
//	SL s1;
//	SLInit(&s1);
//	
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushFront(&s1, 9);
//	SLPushFront(&s1, 8);
//	SLPushFront(&s1, 7);
//	SLPrint(&s1);
//	SLPopBack(&s1);
//	SLPrint(&s1);
//	SLPopFront(&s1);
//	SLPrint(&s1);
//}

void Contact02() {
	contact con;
	InitContact(&con);
	AddContact(&con);
	DelContact(&con);
}

int main() {
	//SLTest01();
	Contact02();
	return 0;
}

