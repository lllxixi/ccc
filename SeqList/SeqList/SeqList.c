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

//检查空间大小，并为不足空间分配新空间
void SLCheckCapacity(SL* sl)
{
	//插入数据之前先看空间够不够
	if (sl->capacity == sl->size)
	{
		//申请空间
		//malloc calloc realloc  int arr[100] --->增容realloc
		//三目表达式
		int newCapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
		DataType* tmp = (DataType*)realloc(sl->arr, newCapacity * sizeof(DataType));//要申请多大的空间
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);//直接退出程序，不再继续执行
		}
		//空间申请成功
		sl->arr = tmp;
		sl->capacity = newCapacity;
	}
}

void PushFront(SL* sl, DataType x) {
	assert(sl);
    SLCheckCapacity(sl);//不需要使用 &sl，这是因为 sl 已经是一个指向 SL 结构的指针
    // 将元素插入到数组的开头
    for (int i = sl->size; i > 0; i--) {
        sl->arr[i] = sl->arr[i - 1];  // 最后一次 sl->arr[1] = sl->arr[0]
    }
    sl->arr[0] = x;
    sl->size++;
}

void PushBack(SL* sl, DataType x) {
	assert(sl);
    // 检查内存是否足够，如果不够则分配更多内存
    SLCheckCapacity(sl);
    sl->arr[sl->size] = x;
    sl->size++;
}

//打印只引用形参，结构体直接用sl. 不用->
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
			printf("! 找到了 ·v·");
			printf("\n");
			return i;
		}
	}
	printf("。 没找到 ·-·");//跳出循环还没找到
	printf("\n");
	return -1;
}

void Revise(SL* sl, DataType x, DataType y) {
	//x查找值，y修改值
	assert(sl);
	int m = Find(*sl, x);
	if (m != -1) {
		sl->arr[m] = y;
		Print(*sl);
	}
	else {
		printf("无法修改，没有该值·—·");
	}
}