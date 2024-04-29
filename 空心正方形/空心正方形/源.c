#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。

int main() {
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	
	return 0;
}