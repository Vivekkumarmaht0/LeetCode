class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;
        int max1 = INT_MIN; 
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                st.insert(nums[i]);
            } else{
                max1 = max(max1,nums[i]);
            }
        }

        for(auto i: st){
            sum += i;
        }

        if(st.size()){
            return sum;
        } else{
            return max1;
        }
    }
};