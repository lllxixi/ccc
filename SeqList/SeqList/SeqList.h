#pragma once
//˳���ṹ����������
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
//��̬��ṹ����
typedef struct SeqList {
	DataType* arr;
	int size;//��Ч����
	int capacity;//��
}SL;

//��ʼ��
void Init(SL* sl);
//˳��������
void SLDestroy(SL* ps);

//ͷ�壬β��
void PushFront(SL* sl, DataType x);
void PushBack(SL* sl, DataType x);

//ͷɾ��βɾ
void PopFront(SL* sl);
void PopBack(SL* sl);

//ָ��λ�� �� ɾ
void SLInsert(SL* sl, int pos, DataType x);
void SLDelet(SL* sl, int pos);

//�飬��
int Find(SL sl, DataType x);
void Revise(SL* sl, DataType x, DataType y);

//��ӡ
void Print(SL sl);

//���ռ��С����Ϊ����ռ�����¿ռ�
void SLCheckCapacity(SL* sl);