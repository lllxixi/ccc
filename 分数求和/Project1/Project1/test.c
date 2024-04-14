#include<stdio.h>
#include<math.h>
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

int main() {
	double sum = 0;
	int i = 1;//i是整型，后续计算会被强制转化为整型
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