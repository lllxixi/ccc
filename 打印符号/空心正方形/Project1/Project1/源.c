#include <stdio.h>
#include <stdlib.h>


int main() {
        int i = 0, j = 0;
        int M = 0;

        printf("���������Ĵ�С��");
        scanf_s("%d", &M);

        // ��̬�����ά������ڴ�ռ�
        //VS��֧��������Ϊ����
        int** a = (int**)malloc(M * sizeof(int*));
        for (i = 0; i < M; i++) {
            a[i] = (int*)malloc(M * sizeof(int));
        }

        // ʹ�ö�̬���������
        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                if (i == 0 || i == M - 1) {
                    printf("* ");
                }
                else {
                    if (j == 0 || j == M - 1) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
    return 0;
}