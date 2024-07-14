#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//方法定义

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
    // 检查内存是否足够，如果不够则分配更多内存
    if (sl->size >= sl->capacity) {
        int newCapacity = (sl->capacity == 0) ? 1 : (sl->capacity * 2);
        DataType* newArr = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));
        if (!newArr) {
            // 处理内存分配失败
            fprintf(stderr, "内存分配失败\n");
            exit(EXIT_FAILURE);
        }
        // 复制旧数组到新数组
        for (int i = 0; i < sl->size; i++) {
            newArr[i] = sl->arr[i];
        }
        free(sl->arr);  // 释放旧数组
        sl->arr = newArr;
        sl->capacity = newCapacity;
    }
}

void PushFront(SL* sl, DataType x) {
    // 检查内存是否足够，如果不够则分配更多内存
    if (sl->size >= sl->capacity) {
        int newCapacity = (sl->capacity == 0) ? 1 : (sl->capacity * 2);
        DataType* newArr = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));
        if (!newArr) {
            // 处理内存分配失败
            fprintf(stderr, "内存分配失败\n");
            exit(EXIT_FAILURE);
        }
        // 复制旧数组到新数组
        for (int i = 0; i < sl->size; i++) {
            newArr[i] = sl->arr[i];
        }
        free(sl->arr);  // 释放旧数组
        sl->arr = newArr;
        sl->capacity = newCapacity;
    }
    // 将元素插入到数组的开头
    for (int i = sl->size; i > 0; i--) {
        sl->arr[i] = sl->arr[i - 1];  // 最后一次 sl->arr[1] = sl->arr[0]
    }
    sl->arr[0] = x;
    sl->size++;
}

void PushBack(SL* sl, DataType x) {
    sl->arr[sl->size] = x;
    sl->size++;
}