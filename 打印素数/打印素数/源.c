//写一个代码：打印100~200之间的素数
#include <stdio.h>

int main() {
	int num = 100;
	printf("打印100~200的素数\n");
	while (num <= 200) {
		int x = 2; // 重置 x 的值为 2
		while (x != num) {
			int ret = num % x;
			if (ret == 0) {
				break;
			}
			x++;
		}
		if (x == num) {
			printf("%d ", x);
		}
		num++;
	}
	return 0;
}