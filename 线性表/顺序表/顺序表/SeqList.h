# pragma once
# include <stdio.h>
# include<stdlib.h>
# include <assert.h>
#define INIT_CAPACITY 4

typedef int SLDataType;
// 动态顺序表 -- 按需申请
typedef struct SeqList
{
    SLDataType* a;
    int size;     // 有效数据个数
    int capacity; // 空间容量
}SL;

//初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
//扩容
void SLCheckCapacity(SL* ps);

//头部插入删除 / 尾部插入删除
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);