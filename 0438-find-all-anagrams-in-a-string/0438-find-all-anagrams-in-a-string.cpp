class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        map<char, int> freq;
        int k = p.size();
        for(auto i: p) {
            freq[i]++;
        }

        map<char, int> res;
        for(int i = 0; i < s.size(); i++) {
            res[s[i]]++;

            if(i >= k) {
                res[s[i - k]]--;
                if(res[s[i - k]] == 0) {
                    res.erase(s[i - k]);
                }
            }

            if(i >= (k - 1)) {
                if(freq == res) {
                    ans.push_back(i - k + 1);
                }
            }
        }
        return ans;
    }
};