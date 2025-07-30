/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
 #include <stdio.h>


 int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

// No LeetCode, a main já está feita, deve-se apenas construir a função.
int main() {
    int target = 9;
    int* nums = malloc(sizeof(int) * 4);
    int returnSize;

    nums[0] = 2;
    nums[1] = 7;
    nums[2] = 11;
    nums[3] = 15;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("[");
        for(int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1 ) printf(", ");
        }
        printf("]");
        free(result);
    } else {
        printf("Nenhuma combinação encontrada.\n");
    }

    free(nums);

    return 0;
}

// Complexity = O(n^2)