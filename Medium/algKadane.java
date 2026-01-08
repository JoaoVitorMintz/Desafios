// Maximum Subarray
class Solution {
    
    private int max(int a, int b) {
        if (a > b) return a;
        else return b;
    }

    public int maxSubArray(int[] nums) {
        int maxAtual = nums[0];
        int maxGlobal = nums[0];

        for (int i = 1; i < nums.length; i++) {
            maxAtual = max(nums[i], maxAtual + nums[i]);
            maxGlobal = max(maxGlobal, maxAtual);
        }

        return maxGlobal;
    }
}
