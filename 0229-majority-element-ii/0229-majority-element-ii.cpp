class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>freq;
        vector<int>ans;
        for(int i: nums) {
            freq[i]++;
        }
        for(auto &p: freq) {
            if(p.second > n/3) {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};