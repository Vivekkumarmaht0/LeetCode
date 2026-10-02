class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = -1;
        int rem = 0;
        for (int i = 0; i < nums.size(); i++) {
            rem = (rem + nums[i]) % k;
            if (freq.count(rem)) {
                if (i - freq[rem] >= 2) {
                    return true;
                }
            } else {
                freq[rem] = i;
            }
        }
        return false;
    }
};