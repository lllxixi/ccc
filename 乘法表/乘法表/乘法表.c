#include<stdio.h>
#include<math.h>

int main() {
	int i = 1, j = 1;
	int ret = 0;
	printf("！！！！！！！！！9*9核隈燕！！！！！！！！！\n");
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			ret = i * j;
			printf(" %d * %d = %d ", i, j, ret);
		}
		printf("\n");
	}
	return 0;
}