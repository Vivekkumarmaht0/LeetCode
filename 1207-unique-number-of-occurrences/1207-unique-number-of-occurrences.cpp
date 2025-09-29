class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>freq;
        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        vector<int>ans;
        for(auto p: freq) {
            ans.push_back(p.second);
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size()-1; i++) {
            if(ans[i] == ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};