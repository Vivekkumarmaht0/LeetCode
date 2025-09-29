class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;
        for(int i: arr) {
            freq[i]++;
        }
        unordered_set<int>ans;
        for(auto &p: freq) {
            if(ans.count(p.second)){
                return false;
            }
            ans.insert(p.second);
        }
        // int res = ans[0];
        // for(int i = 1; i < ans.size(); i++) {
        //     if(res != ans[i]) {
        //         return false;
        //     }
        // }
        return true;
    }
};