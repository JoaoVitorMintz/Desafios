int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    
    int sum = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[sum] = nums[i];
            sum++;
        }
    }
    return sum;
}