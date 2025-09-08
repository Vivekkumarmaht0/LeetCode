class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int digit = nums[i];
            while(digit > 0) {
                int rem = digit % 10;
                res += rem;
                digit /= 10;
            }
        }
        return abs(sum - res);
    }
};