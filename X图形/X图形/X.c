#define _CRT_SECURE_NO_WARNINGS 1

//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。

#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j || i + j == n - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
	}
	return 0;
}