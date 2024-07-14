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

void SLCheckCapacity(SL* sl){
    // ����ڴ��Ƿ��㹻������������������ڴ�
    if (sl->size >= sl->capacity) {
        int newCapacity = (sl->capacity == 0) ? 1 : (sl->capacity * 2);
        DataType* newArr = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));
        if (!newArr) {
            // �����ڴ����ʧ��
            fprintf(stderr, "�ڴ����ʧ��\n");
            exit(EXIT_FAILURE);
        }
        // ���ƾ����鵽������
        for (int i = 0; i < sl->size; i++) {
            newArr[i] = sl->arr[i];
        }
        free(sl->arr);  // �ͷž�����
        sl->arr = newArr;
        sl->capacity = newCapacity;
    }
}

void PushFront(SL* sl, DataType x) {
    // ����ڴ��Ƿ��㹻������������������ڴ�
    if (sl->size >= sl->capacity) {
        int newCapacity = (sl->capacity == 0) ? 1 : (sl->capacity * 2);
        DataType* newArr = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));
        if (!newArr) {
            // �����ڴ����ʧ��
            fprintf(stderr, "�ڴ����ʧ��\n");
            exit(EXIT_FAILURE);
        }
        // ���ƾ����鵽������
        for (int i = 0; i < sl->size; i++) {
            newArr[i] = sl->arr[i];
        }
        free(sl->arr);  // �ͷž�����
        sl->arr = newArr;
        sl->capacity = newCapacity;
    }
    // ��Ԫ�ز��뵽����Ŀ�ͷ
    for (int i = sl->size; i > 0; i--) {
        sl->arr[i] = sl->arr[i - 1];  // ���һ�� sl->arr[1] = sl->arr[0]
    }
    sl->arr[0] = x;
    sl->size++;
}

void PushBack(SL* sl, DataType x) {
    sl->arr[sl->size] = x;
    sl->size++;
}