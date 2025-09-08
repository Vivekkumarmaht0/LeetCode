class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string str = "";
        for (int i = 0; i < words.size(); i++) {
            str = words[i];
            if(str.size() > 0) {
                int left = 0;
                int right = str.size()-1;
                if(str.size() == 1) return str;
                while(left < right) {
                    if(str[left] == str[right]) {
                        left++;
                        right--;
                    } else {
                        break;
                    }
                }
                if(left == right || left > right) return str;
            }
        }
        return "";
    }
};