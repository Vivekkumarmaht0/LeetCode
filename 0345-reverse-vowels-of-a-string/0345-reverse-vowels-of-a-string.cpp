class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U');
    }
    string reverseVowels(string s) {
        int right = s.size()-1;
        int left = 0;
        while(left < right) {
            if(!isVowel(s[left])) {
                left++;
            } else if(!isVowel(s[right])) {
                right--;
            } else {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
        }
        return s;
    }
};