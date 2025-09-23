class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int cnt = 0, maxele = 0;
        // for(int i=0; i<nums.size(); i++){
        //     if(cnt == 0){
        //         maxele = nums[i];
        //         cnt++;
        //     } else if(maxele == nums[i]){
        //         cnt++;
        //     } else {
        //         cnt--;
        //     }
        // }

        int n = nums.size();
        map<int, int>freq;
        for(int i: nums) {
            freq[i]++;
        }
        int ans = 0;
        for(auto &p: freq) {
            if(p.second > n/2) {
                return p.first;
            }
        }
        return 0;
    }
};