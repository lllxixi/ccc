//����һ��������������飬�ҵ���������������еĳ��ȡ�
#include <stdio.h>
#define N 5

void arr(){
	int a[N] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf_s("%d", a);
	}
}

//����: [10, 9, 2, 5, 3, 7, 101, 18]
//��� : 4
//���� : ���������������[2, 3, 7, 101]��[2, 5, 7, 18]��[2, 3, 7, 101]�����ĳ����� 4��

int main() {
	int a[] = { 0 };
	printf("���������飺");
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
	printf("��Сֵ��%d", min);

	printf("���ͣ���ĵ���������Ϊ[%s]", a);

	return 0;
}