class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini = 0;
        int ans;
        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            int digit = nums[i];
            while(digit > 0) {
                int rem = digit % 10;
                sum += rem;
                digit /= 10;
            }
            if(sum == i) {
                return i;
            }
        }
        return -1;
    }
};