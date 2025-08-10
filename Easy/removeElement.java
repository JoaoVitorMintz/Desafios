class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        int size = nums.length;
        for (int i = 0; i < size; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];  
                k++;
            }
        }
        return k;
    }
}