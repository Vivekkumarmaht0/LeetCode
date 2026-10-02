class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = nums[0];
        int maxSub = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            a = max(nums[i], a + nums[i]);
            maxSub = max(maxSub, a);
        }
        return maxSub;
    }
};