#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��������
void Init(SL* sl) {
	sl->size = sl->capacity = 0;
	sl->arr = NULL;
}

void SLDestroy(SL* sl) {
	if (sl->arr) {
		free(sl->arr);
	}
	sl->size = sl->capacity = 0;
	sl->arr = NULL;
}

//���ռ��С����Ϊ����ռ�����¿ռ�
void SLCheckCapacity(SL* sl)
{
	//��������֮ǰ�ȿ��ռ乻����
	if (sl->capacity == sl->size)
	{
		//����ռ�
		//malloc calloc realloc  int arr[100] --->����realloc
		//��Ŀ���ʽ
		int newCapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
		DataType* tmp = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));//Ҫ������Ŀռ�
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);//ֱ���˳����򣬲��ټ���ִ��
		}
		//�ռ�����ɹ�
		sl->arr = tmp;
		sl->capacity = newCapacity;
	}
}

void PushFront(SL* sl, DataType x) {
	assert(sl);
    SLCheckCapacity(sl);//����Ҫʹ�� &sl��������Ϊ sl �Ѿ���һ��ָ�� SL �ṹ��ָ��
    // ��Ԫ�ز��뵽����Ŀ�ͷ
    for (int i = sl->size; i > 0; i--) {
        sl->arr[i] = sl->arr[i - 1];  // ���һ�� sl->arr[1] = sl->arr[0]
    }
    sl->arr[0] = x;
    sl->size++;
}

void PushBack(SL* sl, DataType x) {
	assert(sl);
    // ����ڴ��Ƿ��㹻������������������ڴ�
    SLCheckCapacity(sl);
    sl->arr[sl->size] = x;
    sl->size++;
}

//��ӡֻ�����βΣ��ṹ��ֱ����sl. ����->
void Print(SL sl) {
    for (int i = 0; i < sl.size; i++) {
        printf("%d ", sl.arr[i]);
    }
	printf("\n");
}

void PopFront(SL* sl) {
	assert(sl);
	assert(sl->size);
	for (int i = 0; i<sl->size; i++) {
		sl->arr[i] = sl->arr[i + 1];//sl->arr[size-1]=sl->arr[size]
	}
	sl->size--;
}

void PopBack(SL* sl) {
	assert(sl);
	assert(sl->size);
	sl->size--;
}

int Find(SL sl, DataType x) {
	for (int i = 0; i < sl.size; i++) {
		if (sl.arr[i] == x) {
			printf("! �ҵ��� ��v��");
			printf("\n");
			return i;
		}
	}
	printf("�� û�ҵ� ��-��");//����ѭ����û�ҵ�
	printf("\n");
	return -1;
}

void Revise(SL* sl, DataType x, DataType y) {
	//x����ֵ��y�޸�ֵ
	assert(sl);
	int m = Find(*sl, x);
	if (m != -1) {
		sl->arr[m] = y;
		Print(*sl);
	}
	else {
		printf("�޷��޸ģ�û�и�ֵ������");
	}
}