#include "SeqList.h"

void SLInit(SL* ps)//传地址而不是传值，初始化有地址但是值为零
{
	ps->size =ps-> capacity = 0;
	ps->a = NULL;
}

void SLDestroy(SL* ps)
{
	if (ps->a) {
		free(ps->a);
		ps->a = NULL;
	}
	ps->size = ps->capacity = 0;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//扩容
void SLCheckCapacity(SL* ps,SLDataType x)
{
	if (ps->size ==ps-> capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity; //三目操作符
		SLDataType* tmp =(SLDataType*)realloc(ps->a, newCapacity * 2 * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("realloc fail!");
			exit(1);
		}//空间申请失败，tmp临时存储表防止原始表被删
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}


//尾部插入删除
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);//判断是否为空，等价与assert(ps != NULL)
	SLCheckCapacity(ps,x);//扩容
	ps->a[ps->size] = x;
	ps->size++;
}

//尾删
void SLPopBack(SL* ps){
	if (ps->size > 0) {
		ps->size--;
	}
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps,x);
	//原有后移
	for (int i = ps->size; i>0 ; i--) {
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}

//头删
void SLPopFront(SL* ps)
{
	if (ps->size > 0) {
		memmove(ps->a, ps->a + 1, (ps->size - 1) * sizeof(SLDataType)); 
		// memmove 函数的第一个参数是目标地址，第二个参数是源地址，第三个参数是要移动的字节数。
		ps->size--;
	}
}


