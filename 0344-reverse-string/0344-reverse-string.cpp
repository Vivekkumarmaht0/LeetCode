class Solution {
public:
    void reverseString(vector<char>& s) {
        int right = s.size()-1;
        int left = 0;
        
        while(left <= right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }  
    }
};