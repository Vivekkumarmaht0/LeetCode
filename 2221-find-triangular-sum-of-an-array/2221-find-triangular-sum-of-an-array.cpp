class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        // int j = 0;
        while (n > 1) {
            // int j = 0;
            for (int i = 0; i < n - 1; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
            n--;
        }
        return nums[0];
    }
};
