class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        for(int i=0; i<nums.size(); i++){
            arr[i] = nums[i] * nums[i];
        }
        sort(arr.begin(),arr.end());
        return arr;
    }

};