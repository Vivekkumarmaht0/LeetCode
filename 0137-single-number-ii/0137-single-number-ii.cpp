class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i: nums) {
            freq[i]++;
        }
        int ans = 0;
        for(auto &p: freq) {
            if(p.second == 1) {
                ans = p.first;
                break;
            }
        }
        return ans;
    }
};