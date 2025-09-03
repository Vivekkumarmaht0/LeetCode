class Solution {
public:
    bool isPalindrome(int n, int i){
        vector<int>ans;
        while(n > 0){
            ans.push_back(n % i);
            n /= i;
        }
        int left = 0;
        int right = ans.size() - 1;
        while(left < right) {
            if(ans[left] != ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i <= n - 2; i++){
            if(!isPalindrome(n,i)){
                return false;
            }
        }
        return true;
    }
};