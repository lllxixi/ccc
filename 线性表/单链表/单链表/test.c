#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//SList.h�ļ��������������壬������ΪSLTNode* phead
int main(){
//�ȳ�ʼ������
	SLNode* p1 = (SLNode*)malloc(sizeof(SLNode));
	p1->data = 1;
	p1->next = NULL;
	SLNode* p2 = (SLNode*)malloc(sizeof(SLNode));
	p2->data = 2;
	p2->next = NULL;
	SLNode* p3 = (SLNode*)malloc(sizeof(SLNode));
	p3->data = 3;
	p3->next = NULL;
	SLNode* p4 = (SLNode*)malloc(sizeof(SLNode));
	p4->data = 4;
	p4->next = NULL;
	SLNode* p5 = (SLNode*)malloc(sizeof(SLNode));
	p5->data = 5;
	p5->next = NULL;
	
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	//p5->next = NULL; //��ֹҰָ��

	SLNode* p = p1;
	SLPrint(p);

	SLPushBack(&p, 9);
	SLPushBack(&p, 8);
	SLPushBack(&p, 7);
	SLPrint(p);

	SLPopBack(&p);
	SLPrint(p);

	SLPopFront(&p);
	SLPrint(p);

	SLFind(p, 1);//p��ָ�룬&p��ָ��ĵ�ַ
	return 0;
}