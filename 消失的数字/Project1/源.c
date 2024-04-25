//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
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

    free(nums); // 释放动态分配的内存
    return 0;
}
