class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue = 0;
        for(auto i: accounts) {
            int val = 0;
            for(auto j: i) {
                val += j;
            }
            maxValue = max(maxValue, val);
        }
        return maxValue;
    }
};