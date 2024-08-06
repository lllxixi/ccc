#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef int DataType;

typedef struct Stack {
	DataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* pst);
void STDestroy(ST* pst);

//入栈出栈
void STPush(ST* pst, DataType x);
void STPop(ST* pst);

//取栈顶元素
DataType STTop(ST* pst);

//判空
bool STEmpty(ST* pst);

//获取数据个数
int STSize(ST* pst);