#include<stdio.h>
#include<stdlib.h>
//1000~2000����
//�ܱ�400�������ܱ�4���������Ҳ��ܱ�100������������
#define MIN 1000
#define MAX 2000

int main() {
	int num = 0;
	printf("��%d~%d�У�����\n", MIN, MAX);
	for (int year = MIN; year <= MAX; year++) {
		if ((year % 400 == 0 && year % 100 != 0) || (year % 4 == 0)) {
			printf(" % d", year);
			num++;
		}
	}
	printf("\n�����ܹ���%d��", num);
	return num;
}