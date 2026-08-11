class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum = 0;
        int minLen = INT_MAX;
        int left = 0, right = 0;
        while(right < nums.size()) {
            sum += nums[right];
            while(sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
            right++;
        }      
        return minLen == INT_MAX ? 0 : minLen;  
    }
};