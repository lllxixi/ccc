#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


void STInit(ST* pst) {
	pst->a = NULL;
	pst->top = 0;//ָ��ǰջ������һ��λ��
	pst->capacity = 0;
}
void STDestroy(ST* pst) {
	free(a);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

//��ջ��ջ
void STPush(ST* pst, DataType x) {
	////����
	//if (pst->top == pst->capacity) {
	//	newTemp = 
	//}
	//����
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {
	pst->top--;
}

//ȡջ��Ԫ��
DataType StackTop(ST* pst) {
	while (pst->top) {
		printf("%d ", pst->a[ps->top]);
		pst->top--;
	}
}

//�п�
bool STEmpty(Stack* pst) {
	if (pst->top == 0) {
		return;
	}
}

//��ȡ���ݸ���
int STSize(ST* pst) {
	return pst->top;
}

