class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        int cnt = 0, sum = 0;
        while(left < right){
            sum = nums[left] + nums[right];
            if(sum == k){
                cnt++;
                left++;
                right--;
            }
            else if(sum > k){
                right--;
            } else{
                left++;
            }
        }
        return cnt;
    }
};