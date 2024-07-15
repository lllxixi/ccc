#pragma once
//顺序表结构，方法声明
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
//动态表结构声明
typedef struct SeqList {
	DataType* arr;
	int size;//有效个数
	int capacity;//表长
}SL;

//初始化
void Init(SL* sl);
//顺序表的销毁
void SLDestroy(SL* ps);

//头插，尾插
void PushFront(SL* sl, DataType x);
void PushBack(SL* sl, DataType x);

//头删，尾删
void PopFront(SL* sl);
void PopBack(SL* sl);

//指定位置 插 删
void SLInsert(SL* sl, int pos, DataType x);
void SLDelet(SL* sl, int pos);

//查，改
int Find(SL sl, DataType x);
void Revise(SL* sl, DataType x, DataType y);

//打印
void Print(SL sl);

//检查空间大小，并为不足空间分配新空间
void SLCheckCapacity(SL* sl);