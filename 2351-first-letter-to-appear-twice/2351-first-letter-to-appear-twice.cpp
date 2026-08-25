class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> ans;
        for(auto i: s) {
            if(ans.count(i)) {
                return i;
            }
            ans.insert(i);
        }
        return ' ';
    }
};