class Solution {
public:
    bool isEven(int n) {
        if(n % 2 == 0) {
            return true;
        }
        return false;
    }
    int digitCount(int n) {
        int size = 0;
        while(n > 0){
            size++;
            n /= 10;
        }
        return size;
    }
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            int ans = digitCount(nums[i]);
            if(isEven(ans)) {
                cnt++;
            }
        }
        return cnt;
    }
};