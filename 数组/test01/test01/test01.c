//��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��
#include<stdio.h>
#define N 10

int main() {
	int a[N] = {0};
	printf("������10��������");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
		//"%d " �еĿո�ᵼ�� scanf_s �����ڶ�ȡ�������һֱ�ȴ���һ���ǿո��ַ�������ܵ��³������û�����ʱ����ͣ��
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