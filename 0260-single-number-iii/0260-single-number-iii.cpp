class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i: nums) {
            freq[i]++;
        }
        vector<int>ans;
        for(auto &p: freq) {
            if(p.second > 0 && p.second < 2) {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};