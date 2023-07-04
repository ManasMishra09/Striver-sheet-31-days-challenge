class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];  // Initialize maxSum as the first element
        int currentSum = nums[0];  // Initialize currentSum as the first element
        
        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};