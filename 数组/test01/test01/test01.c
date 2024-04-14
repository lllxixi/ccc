//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
#include<stdio.h>
#define N 10

int main() {
	int a[N] = {0};
	printf("请输入10个整数：");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
		//"%d " 中的空格会导致 scanf_s 函数在读取整数后会一直等待下一个非空格字符，这可能导致程序在用户输入时出现停顿
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += a[i];
	}
	double aver;
	aver = (double) sum / N;
	printf("%lf", aver);
	return 0;
}