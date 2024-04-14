//#include<stdio.h>
//
//void(int a, int b) {
//	int ret = 0;
//	if (a > b) {
//		ret = a;
//	}
//	else(a < b) {
//		ret = a;
//		a = b;
//		b = ret;
//	}
//}
//int main() {
//	int a, b;
//	int i = 1;
//	scanf("%d %d", &a, &b);
//	max(a, b);
//	while (a <= i) {
//		if (a % i ==0 && b % i==0) {
//			i++
//		}
//		i++;
//	}
//	return 0;
//}

#include<stdio.h>

// 函数：计算两个数的最大公约数;欧几里得算法（辗转相除法）
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("请输入两个整数：");
    scanf_s("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("最大公约数为：%d\n", result);

    return 0;
}
