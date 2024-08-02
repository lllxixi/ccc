#pragma once
#include<stdio.h>
#include<assert.h>

typedef int DataType;

typedef struct Stack {
	DataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* pst);
void STDestroy(ST* pst);

//��ջ��ջ
void STPush(ST* pst, DataType x);
void STPop(ST* pst);

//ȡջ��Ԫ��
DataType StackTop(ST* pst);

//�п�
bool STEmpty(Stack* pst);

//��ȡ���ݸ���
int STSize(ST* pst);