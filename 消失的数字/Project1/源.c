//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//
//int missingNumber(int* nums, int numsSize) {
//    int missing = numsSize;
//    for (int i = 0; i < numsSize; i++) {
//        missing ^= i ^ nums[i];
//    }
//    printf("%s", missing);
//    return missing;
//}
//
//int main() {
//    int* nums = (int*)malloc(sizeof(int));
//    scanf("%s ", nums);
//    missingNumber(&nums, 10);
//
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int missingNumber(int* nums, int numsSize) {
    int missing = numsSize;
    for (int i = 0; i < numsSize; i++) {
        missing ^= i ^ nums[i];
    }
    return missing;
}

int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int* nums = (int*)malloc(numsSize * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int result = missingNumber(nums, numsSize);
    printf("The missing number is: %d\n", result);

    free(nums); // �ͷŶ�̬������ڴ�
    return 0;
}
