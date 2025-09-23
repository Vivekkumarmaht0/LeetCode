class Solution {
public:
    static bool order(pair<int, int>&a, pair<int, int>&b) {
        return a.second > b.second;
    }
    void sortt(unordered_map<int, int>&freq, vector<int>&res, int k) {
        vector<pair<int, int>>ans(freq.begin(), freq.end());
        sort(ans.begin(), ans.end(), order);

        for(int i = 0; i < k && i < ans.size(); i++) {
            res.push_back(ans[i].first);
        }

    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        vector<int>res;
        for(int i: nums) {
            freq[i]++;
        }
        sortt(freq,res,k);
        return res;
    }
};