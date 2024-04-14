#include<stdio.h>
#include<stdlib.h>
//1000~2000闰年
//能被400整除或能被4整除，并且不能被100整除的是闰年
#define MIN 1000
#define MAX 2000

int main() {
	int num = 0;
	printf("在%d~%d中，闰年\n", MIN, MAX);
	for (int year = MIN; year <= MAX; year++) {
		if ((year % 400 == 0 && year % 100 != 0) || (year % 4 == 0)) {
			printf(" % d", year);
			num++;
		}
	}
	printf("\n闰年总共有%d个", num);
	return num;
}