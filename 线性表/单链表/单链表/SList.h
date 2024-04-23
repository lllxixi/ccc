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

//头部插入删除/尾部插入删除
void SLPushBack(SLNode** pphead, SLDataType x);
void SLPushFront(SLNode** pphead, SLDataType x);
void SLPopBack(SLNode** pphead);
void SLPopFront(SLNode** pphead);

//查找
SLNode* SLFind(SLNode* phead, SLDataType x);
//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
////删除pos节点
//void SLTErase(SLTNode** pphead, SLTNode* pos);
////在指定位置之后插入数据
//void SLTInsertAfter(SLTNode* pos, SLTDataType x);
////删除pos之后的节点
//void SLTEraseAfter(SLTNode* pos);
////销毁链表
//void SListDesTroy(SLTNode** pphead);