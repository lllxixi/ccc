#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


void STInit(ST* pst) {
	assert(pst);

	pst->a = NULL;
	pst->top = 0;//ָ��ǰջ������һ��λ��
	pst->capacity = 0;
}
void STDestroy(ST* pst) {
	assert(pst);

	free(pst->a);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

//��ջ��ջ
void STPush(ST* pst, DataType x) {

	assert(pst);

	//����
	if (pst->top == pst->capacity) {
		int newCapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		DataType* tmp = (DataType*)realloc(pst->a, newCapacity * sizeof(DataType));
		if (tmp == NULL) {
			perror("realloc fail");
			return;
		}

		pst->a = tmp;
		pst->capacity = newCapacity;
	}
	//����
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {

	assert(pst);
	assert(pst->top > 0);

	pst->top--;
}

//ȡջ��Ԫ��
DataType STTop(ST* pst) {
	//while (pst->top) {
	//	printf("%d ", pst->a[pst->top]);
	//	pst->top--;
	//}
	assert(pst);
	assert(pst->top > 0);

	return pst->a[pst->top - 1];
}

//�п�
bool STEmpty(ST* pst) {

	assert(pst);
	return pst->top == 0;

}

//��ȡ���ݸ���
int STSize(ST* pst) {

	assert(pst);
	return pst->top;
}

