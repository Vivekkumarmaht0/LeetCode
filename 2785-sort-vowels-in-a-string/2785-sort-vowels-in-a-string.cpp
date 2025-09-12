class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        vector<char>arr;
        for(int i = 0; i < s.size(); i++) {
            if(vowels.find(s[i]) != string::npos) {
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(), arr.end());
        int ind = 0;
        for(int i = 0; i < s.size(); i++) {
            if(vowels.find(s[i]) != string::npos) {
                s[i] = arr[ind++];
            }
        }
        return s;


    }
};