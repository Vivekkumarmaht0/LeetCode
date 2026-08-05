class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, int> freq;
        for(auto i: s) {
            freq[i]++;
        }

        int cnt = 0;
        for(auto x: freq) {
            cnt++;
        }
        return cnt;
    }
};