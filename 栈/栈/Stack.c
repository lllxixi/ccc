#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


void STInit(ST* pst) {
	pst->a = NULL;
	pst->top = 0;//指向当前栈顶的下一个位置
	pst->capacity = 0;
}
void STDestroy(ST* pst) {
	free(a);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

//入栈出栈
void STPush(ST* pst, DataType x) {
	////扩容
	//if (pst->top == pst->capacity) {
	//	newTemp = 
	//}
	//插入
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {
	pst->top--;
}

//取栈顶元素
DataType StackTop(ST* pst) {
	while (pst->top) {
		printf("%d ", pst->a[ps->top]);
		pst->top--;
	}
}

//判空
bool STEmpty(Stack* pst) {
	if (pst->top == 0) {
		return;
	}
}

//获取数据个数
int STSize(ST* pst) {
	return pst->top;
}

