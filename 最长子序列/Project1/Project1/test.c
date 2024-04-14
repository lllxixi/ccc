//给定一个无序的整数数组，找到其中最长上升子序列的长度。
#include <stdio.h>
#define N 5

void arr(){
	int a[N] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf_s("%d", a);
	}
}

//输入: [10, 9, 2, 5, 3, 7, 101, 18]
//输出 : 4
//解释 : 最长的上升子序列是[2, 3, 7, 101]或[2, 5, 7, 18]或[2, 3, 7, 101]，它的长度是 4。

int main() {
	int a[] = { 0 };
	printf("请输入数组：");
	arr(a);
	int i = 0;
	int ret = 0;
	int min = a[0];
	while (i<N-1) {
		if (a[i + 1] < a[i]) {
			min = a[i + 1];
			i++;
		}
	}
	printf("最小值：%d", min);

	printf("解释：最长的递增子序列为[%s]", a);

	return 0;
}