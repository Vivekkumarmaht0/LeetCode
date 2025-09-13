class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxFreqSum(string s) {
        int evenCnt = 0, oddCnt = 0;
        unordered_map<char, int>mpp;

        for(char c: s) {
            if(isVowel(c)) {
                mpp[c]++;
                evenCnt = max(evenCnt, mpp[c]);
            } else {
                mpp[c]++;
                oddCnt = max(oddCnt, mpp[c]);
            }
        }
        return evenCnt + oddCnt;
    }
};