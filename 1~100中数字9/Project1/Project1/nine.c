#include<stdio.h>
#include<math.h>

int main() {
		int count=0;
	for (int i = 1; i <= 100; i++) {
		int ret=i;
		while (ret!=0) {
			if (ret % 10 == 9) {
				count++;
			}
			ret = ret / 10;
		}
	}
	printf("1~100中数字9的个数：%d", count);
	return 0;
}