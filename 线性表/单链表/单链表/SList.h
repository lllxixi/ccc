#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;
	struct SListNode *next;

}SLNode;

void SLPrint(SLNode* phead);

//ͷ������ɾ��/β������ɾ��
void SLPushBack(SLNode** pphead, SLDataType x);
void SLPushFront(SLNode** pphead, SLDataType x);
void SLPopBack(SLNode** pphead);
void SLPopFront(SLNode** pphead);

//����
SLNode* SLFind(SLNode* phead, SLDataType x);
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
////ɾ��pos�ڵ�
//void SLTErase(SLTNode** pphead, SLTNode* pos);
////��ָ��λ��֮���������
//void SLTInsertAfter(SLTNode* pos, SLTDataType x);
////ɾ��pos֮��Ľڵ�
//void SLTEraseAfter(SLTNode* pos);
////��������
//void SListDesTroy(SLTNode** pphead);