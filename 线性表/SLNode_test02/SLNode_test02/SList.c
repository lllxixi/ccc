#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//打印
void Print(list* pphead) {
	list* p = pphead;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

//查找
void Find(list* pphead, SLDataType x) {
	list* p = pphead;
	while (p) {
		if (p->data == x)
			return p;
		p = p->next;
	}
	return 0;
}
///查找后结果是什么


//开辟空间
void SListRoom() {
	newNode = malloc(sizeof(SLDataTye));
}

//尾插
void SListPushBack(list** pphead, SLDataType x);
{
	list* p = *pphead;
	while (p->next) {
		p = p->next;
	}

}