#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��ӡ
void Print(list* pphead) {
	list* p = pphead;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

//����
void Find(list* pphead, SLDataType x) {
	list* p = pphead;
	while (p) {
		if (p->data == x)
			return p;
		p = p->next;
	}
	return 0;
}
///���Һ�����ʲô


//���ٿռ�
void SListRoom() {
	newNode = malloc(sizeof(SLDataTye));
}

//β��
void SListPushBack(list** pphead, SLDataType x);
{
	list* p = *pphead;
	while (p->next) {
		p = p->next;
	}

}