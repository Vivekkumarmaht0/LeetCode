class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n % 2 == 1) return {};
        map<int, int>freq;
        sort(changed.begin(), changed.end());
        for(auto i: changed){
            freq[i]++;
        }
        vector<int>res;
        for(int i = 0; i < n; i++){ 
            if(freq[changed[i]] == 0) continue;
            if(freq[2 * changed[i]] == 0) return {};
            res.push_back(changed[i]);
            freq[changed[i]]--;
            freq[2 * changed[i]]--;
        }
        return res;
    }
};