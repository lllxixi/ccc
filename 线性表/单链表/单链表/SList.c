#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��ӡ����
void SLPrint(SLNode* phead) {
	SLNode* p = phead;//����ָ��pָ��ͷ���
	while (p!= NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

SLNode* SLnewNode(SLDataType x) {
    // ����Ϊ�գ������½ڵ���Ϊͷ�ڵ�
    SLNode* newNode = (SLNode*)malloc(sizeof(SLNode));
    newNode->data = x;
    newNode->next = NULL;
}

//β��
void SLPushBack(SLNode** pphead, SLDataType x) {
    // *pphead ��ʾָ��ָ���λ�ã���ԭʼ�����ͷָ��
    SLNode* p = *pphead;
    //�����ж������Ƿ�Ϊ��
    if (p == NULL) {
        SLNode* newNode = SLnewNode(x);
        *pphead = newNode; // �޸�ԭʼ�����ͷָ��
    }
    else {
        // ����Ϊ�գ��ҵ����һ���ڵ�
        while (p->next != NULL) {
            p = p->next;
        }
        SLNode * newNode = SLnewNode(x);
        p->next = newNode;
    }
}

//ͷ��
void SLPushFront(SLNode** pphead, SLDataType x) {
    SLNode* newNode = SLnewNode(x);
    newNode->data = x;
    newNode->next = *pphead;
    *pphead = newNode; //��ͷָ���ΪnewNode
}

//βɾ
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
        ptail = NULL;//��ֹ�ڴ�й©
        prev->next = NULL;
    }
}

//ͷɾ
void SLPopFront(SLNode** pphead) {
    assert(*pphead);
    SLNode* prev = *pphead;
    *pphead = prev->next;//*pphead����Ϊ����Ҫ����ָ������ͷ����ָ�룬�����Ǹı�ָ�뱾��ĵ�ַ
    free(prev);
    prev = NULL;
}

//����
//����������SLNode ,����Ҫ����ֵ  ��void�ǿ�ֵ
SLNode* SLFind(SLNode* pphead, SLDataType x) {
    SLNode* p = pphead;
    while (p != NULL) {
        if (p->data == x) {
            printf("�ҵ��� >o< ~");
            return p;
        }
        else {
            p = p->next;
        }
    }
    printf("û�и����ݣ�����");
    return NULL;
}

//֣�صĸ�л����ŮʿΪ���δ����ṩ�Ĵ���֧�֣���

//��ָ��λ��֮ǰ��������

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SLTNode {
    SLTDataType data;
    struct SLTNode* next;
} SLTNode;

// Insert data x before the specified position in the linked list
//void SLTInsert(SLTNode** pphead, SLTDataType x, int position) {
//    SLTNode* pos = *pphead;
//    SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
//    if (newNode == NULL) {
//        printf("Memory allocation failed!\n");
//        return;
//    }
//    newNode->data = x;
//    newNode->next = NULL;
//
//    // Handle case where position is 0 (insert at the beginning)
//    if (position == 0) {
//        newNode->next = *pphead;
//        *pphead = newNode;
//        return;
//    }
//
//    // Traverse the list to find the position
//    int i = 0;
//    while (pos != NULL && i < position - 1) {
//        pos = pos->next;
//        i++;
//    }
//
//    // Check if specified position is valid
//    if (pos == NULL || pos->next == NULL) {
//        printf("Position %d is out of range!\n", position);
//        free(newNode);
//        return;
//    }
//
//    // Insert the new node before the specified position
//    newNode->next = pos->next;
//    pos->next = newNode;
//}
//
//// Function to print the


void SLTInsert(SLTNode** pphead, SLTDataType x) {
    SLNode* pos = *pphead;
    //ָ��λ�ò��������ڣ����û�и�λ��
    
    scanf("%d", &n);
    while (pos->next != NULL) {
        if (pos->next == ) {
            //a b ����a x b 

        }
    }
}