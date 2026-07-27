class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int pro = ((nums[n-1]-1) * (nums[n-2]-1));



        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = i+1; j < nums.size(); j++) {
        //         pro = ((nums[i] - 1) * (nums[j] - 1));
        //         mx = max(mx, pro);  
        //     }
        // }


        // while(i < nums.size()) {
        //     pro = ((nums[i] - 1) * (nums[j] - 1));
        //     mx = max(mx, pro);  
        // }
        return pro;
    }
};