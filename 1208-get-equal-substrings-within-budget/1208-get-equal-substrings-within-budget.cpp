class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int j = 0, cost = 0, maxLen = 0;
        for(int i = 0; i < n; i++) {
            cost += abs(s[i] - t[i]);

            if(cost > maxCost) {
                cost -= abs(s[j] - t[j]);
                j++;
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};