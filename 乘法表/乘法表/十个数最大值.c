#include<stdio.h>
#include<math.h>

int main2() {
	int i = 0;
	for (i = 1; i <= 10; i++) {
		int a[10] = { 0 };
		a[i] = rand();
		printf("%d",a[i]);
	}


	return 0;
}