#define _CRT_SECURE_NO_WARNINGS 1

//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�X��ͼ����
//����������
//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//���������
//���ÿ�����룬����á� * ����ɵ�X��ͼ����

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