class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    int maxVowels(string s, int k) {
        int size = s.size();
        int cnt = 0;
        int maxi = 0;
        // for(int i = 0; i < size-k; i++) {
        //     int cnt = 0;
        //     for(int j = 0; j < k; j++) {
        //         if(isVowel(s[i])) {
        //             cnt++;
        //             maxi = max(maxi, cnt);
        //         }
        //     }
        // }

        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                cnt++;
            }
        }
        maxi = cnt;
        for(int i = k; i < size; i++) {
            if(isVowel(s[i])) {
                cnt++;
            }
            if(isVowel(s[i - k])){
                cnt--;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};