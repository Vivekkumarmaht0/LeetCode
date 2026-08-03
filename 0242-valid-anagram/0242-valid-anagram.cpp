class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> freq;

        for(auto a: s) {
            freq[a]++;
        }

        for(auto i: t) {
            if(freq[i] == 0) {
                return false;
            }
            freq[i]--;
        }

        // for(auto x: freq) {
        //     if(x.second != 0) {
        //         return false;
        //     }
        // }
        return true;
    }
};