#include <stdio.h>
#include <stdlib.h>


int main() {
        int i = 0, j = 0;
        int M = 0;

        printf("请输入矩阵的大小：");
        scanf_s("%d", &M);

        // 动态分配二维数组的内存空间
        //VS不支持数组名为变量
        int** a = (int**)malloc(M * sizeof(int*));
        for (i = 0; i < M; i++) {
            a[i] = (int*)malloc(M * sizeof(int));
        }

        // 使用动态分配的数组
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