class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int left = 0, right = 0;
        int maxLen = 0;
        while(right < s.size()) {
            freq[s[right]]++;
            while(freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};