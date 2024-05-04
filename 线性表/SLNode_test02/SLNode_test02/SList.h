#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//��������  ����+ָ��
typedef struct SList {
	SLDataType data;
	struct SList* next;
}list;

//��ӡ
void Print(list* pphead);
//����
void Find(list* pphead, SLDataType x);

//β��
void SListPushBack(list** pphead, SLDataType x);
//ͷ��
void SListPuchFront(list** pphead, SLDataType x);
//βɾ
void SListPopBack(list** pphead);
//ͷɾ
void SListPopFront(list** pphead);
//ָ��λ��ɾ��
void SListPopPos(list** pphead, list* pos, SLDataType x);
//ָ��λ�����
void SListPushPos(list** pphead, list* pos, SLDataType x);