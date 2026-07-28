class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currentSum = 0, maxSum = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            currentSum += nums[i];

            if(i >= (k - 1)) {
                maxSum = max(maxSum, currentSum);
                currentSum -= nums[i - (k - 1)];
            }
        }
        return (double)maxSum / k;
    }
};