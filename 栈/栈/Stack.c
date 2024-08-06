#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


void STInit(ST* pst) {
	assert(pst);

	pst->a = NULL;
	pst->top = 0;//指向当前栈顶的下一个位置
	pst->capacity = 0;
}
void STDestroy(ST* pst) {
	assert(pst);

	free(pst->a);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

//入栈出栈
void STPush(ST* pst, DataType x) {

	assert(pst);

	//扩容
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
	//插入
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {

	assert(pst);
	assert(pst->top > 0);

	pst->top--;
}

//取栈顶元素
DataType STTop(ST* pst) {
	//while (pst->top) {
	//	printf("%d ", pst->a[pst->top]);
	//	pst->top--;
	//}
	assert(pst);
	assert(pst->top > 0);

	return pst->a[pst->top - 1];
}

//判空
bool STEmpty(ST* pst) {

	assert(pst);
	return pst->top == 0;

}

//获取数据个数
int STSize(ST* pst) {

	assert(pst);
	return pst->top;
}

