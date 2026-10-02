class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> str;

        for (const string& s: strs) {
            string key = s;
            sort(key.begin(), key.end());
            str[key].push_back(s);
        }

        vector<vector<string>> res;
        res.reserve(str.size());
        for (auto i : str) {
            res.push_back(move(i.second));
        }
        return res;
    }
};