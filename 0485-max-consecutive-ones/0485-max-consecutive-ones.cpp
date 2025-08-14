class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0, r = 0;
        int maxLen = 0, zero = 0;
        while(r < nums.size()){
            if(nums[r] == 0) zero++;
            while(zero > 0){
                if(nums[l] == 0) zero--;
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};