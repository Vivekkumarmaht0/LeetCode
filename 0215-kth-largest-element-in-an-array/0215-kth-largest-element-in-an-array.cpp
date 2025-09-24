class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // int maxi = nums[0];
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] > maxi){
        //         maxi = nums[i];
        //     }
        //     auto it = upper_bound(nums.begin(),nums.end(),i+2);
        // }

        priority_queue<int>pq;
        vector<int>res;
        for(int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        int ans = 0;
        while(!pq.empty()) {
            ans = pq.top();
            res.push_back(ans);
            pq.pop();
        }
        
        // for(auto i: res) {
        //     cout << i << " ";
        // }

        return res[k-1];
    }
};