#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//打印链表
void SLPrint(SLNode* phead) {
	SLNode* p = phead;//定义指针p指向头结点
	while (p!= NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

SLNode* SLnewNode(SLDataType x) {
    // 链表为空，创建新节点作为头节点
    SLNode* newNode = (SLNode*)malloc(sizeof(SLNode));
    newNode->data = x;
    newNode->next = NULL;
}

//尾插
void SLPushBack(SLNode** pphead, SLDataType x) {
    // *pphead 表示指针指向的位置，即原始链表的头指针
    SLNode* p = *pphead;
    //首先判断链表是否为空
    if (p == NULL) {
        SLNode* newNode = SLnewNode(x);
        *pphead = newNode; // 修改原始链表的头指针
    }
    else {
        // 链表不为空，找到最后一个节点
        while (p->next != NULL) {
            p = p->next;
        }
        SLNode * newNode = SLnewNode(x);
        p->next = newNode;
    }
}

//头插
void SLPushFront(SLNode** pphead, SLDataType x) {
    SLNode* newNode = SLnewNode(x);
    newNode->data = x;
    newNode->next = *pphead;
    *pphead = newNode; //将头指针改为newNode
}

//尾删
void SLPopBack(SLNode** pphead) {
    assert(*pphead);
    if (( * pphead)->next == NULL) {
        free(*pphead);
        *pphead = NULL;
    }
    else {
        SLNode* ptail = *pphead;
        SLNode* prev = *pphead;
        while (ptail->next != NULL) {
            //prev->ptail->NULL
            prev = ptail;
            ptail = ptail->next;
        }
        free(ptail);
        ptail = NULL;//防止内存泄漏
        prev->next = NULL;
    }
}

//头删
void SLPopFront(SLNode** pphead) {
    assert(*pphead);
    SLNode* prev = *pphead;
    *pphead = prev->next;//*pphead是因为我们要更新指向链表头部的指针，而不是改变指针本身的地址
    free(prev);
    prev = NULL;
}

//查找
//函数类型是SLNode ,所以要返回值  而void是空值
SLNode* SLFind(SLNode* pphead, SLDataType x) {
    SLNode* p = pphead;
    while (p != NULL) {
        if (p->data == x) {
            printf("找到啦 >o< ~");
            return p;
        }
        else {
            p = p->next;
        }
    }
    printf("没有该数据！！！");
    return NULL;
}

//郑重的感谢冷澄宸女士为本次代码提供的大力支持！！
