class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int j = 0, maxLen = 0;
        for(int i = 0; i < fruits.size(); i++) {
            freq[fruits[i]]++;

            while(freq.size() > 2) {
                freq[fruits[j]]--;
                if(freq[fruits[j]] == 0) {
                    freq.erase(fruits[j]);
                }
                j++;
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};