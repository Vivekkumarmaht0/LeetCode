class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                a += tolower(s[i]);
            }
        }
        string n(a.begin(),a.end());
        reverse(n.begin(),n.end());
        if(a == n) return true;
        else return false;
    }
};