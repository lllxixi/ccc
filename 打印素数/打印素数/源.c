//дһ�����룺��ӡ100~200֮�������
#include <stdio.h>

int main() {
	int num = 100;
	printf("��ӡ100~200������\n");
	while (num <= 200) {
		int x = 2; // ���� x ��ֵΪ 2
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