# pragma once
# include <stdio.h>
# include<stdlib.h>
# include <assert.h>
#define INIT_CAPACITY 4

typedef int SLDataType;
// ��̬˳��� -- ��������
typedef struct SeqList
{
    SLDataType* a;
    int size;     // ��Ч���ݸ���
    int capacity; // �ռ�����
}SL;

//��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
//����
void SLCheckCapacity(SL* ps);

//ͷ������ɾ�� / β������ɾ��
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);