class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int tl = 0;
        int cnt = 0;
        for (int i : nums) {
            tl ^= i;
            if(i == 0) cnt++;
        }
        int n = nums.size();
        if (tl != 0) return n;  
        if(cnt == n) return 0;
        return n-1;
    }
};