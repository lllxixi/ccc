#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//定义链表  数据+指针
typedef struct SList {
	SLDataType data;
	struct SList* next;
}list;

//打印
void Print(list* pphead);
//查找
void Find(list* pphead, SLDataType x);

//尾插
void SListPushBack(list** pphead, SLDataType x);
//头插
void SListPuchFront(list** pphead, SLDataType x);
//尾删
void SListPopBack(list** pphead);
//头删
void SListPopFront(list** pphead);
//指定位置删除
void SListPopPos(list** pphead, list* pos, SLDataType x);
//指定位置添加
void SListPushPos(list** pphead, list* pos, SLDataType x);