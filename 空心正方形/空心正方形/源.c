#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵġ����ġ�������ͼ����

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