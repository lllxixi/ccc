#include "SeqList.h"

void SLInit(SL* ps)//����ַ�����Ǵ�ֵ����ʼ���е�ַ����ֵΪ��
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

//����
void SLCheckCapacity(SL* ps,SLDataType x)
{
	if (ps->size ==ps-> capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity; //��Ŀ������
		SLDataType* tmp =(SLDataType*)realloc(ps->a, newCapacity * 2 * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("realloc fail!");
			exit(1);
		}//�ռ�����ʧ�ܣ�tmp��ʱ�洢���ֹԭʼ��ɾ
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}


//β������ɾ��
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);//�ж��Ƿ�Ϊ�գ��ȼ���assert(ps != NULL)
	SLCheckCapacity(ps,x);//����
	ps->a[ps->size] = x;
	ps->size++;
}

//βɾ
void SLPopBack(SL* ps){
	if (ps->size > 0) {
		ps->size--;
	}
}

//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps,x);
	//ԭ�к���
	for (int i = ps->size; i>0 ; i--) {
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}

//ͷɾ
void SLPopFront(SL* ps)
{
	if (ps->size > 0) {
		memmove(ps->a, ps->a + 1, (ps->size - 1) * sizeof(SLDataType)); 
		// memmove �����ĵ�һ��������Ŀ���ַ���ڶ���������Դ��ַ��������������Ҫ�ƶ����ֽ�����
		ps->size--;
	}
}


