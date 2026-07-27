class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int left = i+1, right = n-1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum > 0) {
                    right--;
                } else if(sum < 0) {
                    left++;
                } else {
                    ans.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }       
            }
        }
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
};