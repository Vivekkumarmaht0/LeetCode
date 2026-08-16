class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX, left = -1;
        int maxi = INT_MIN, right = -2;
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            if(nums[i] < maxi) right = i;
        }

        for(int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            if(nums[i] > mini) left = i;
        }
        return right - left + 1;
    }
};