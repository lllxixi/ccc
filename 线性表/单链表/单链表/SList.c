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