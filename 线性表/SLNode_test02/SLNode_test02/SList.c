#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��ӡ
void Print(list* pphead) {
	list* p = pphead;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
}