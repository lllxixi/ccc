#include<stdio.h>
#include<math.h>
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

int main() {
	double sum = 0;
	int i = 1;//i�����ͣ���������ᱻǿ��ת��Ϊ����
	for (i = 1; i <= 100; i++) {
		double ret = 1.0 / i;
		if (i % 2 ==0) {
			sum -= ret;
		}
		else
		{
			sum += ret;
		}
	}
	printf("%lf", sum);
	return 0;
}