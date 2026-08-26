class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int subCnt = 0, prefixSum = 0, req;
        map<int, int> freq = {{0,1}};

        for(int i = 0; i < n; i++) {
            prefixSum += nums[i];
            req = prefixSum - k;

            if(freq.find(req) != freq.end()) {
                subCnt += freq[req];
            }
            freq[prefixSum]++;
        }
        return subCnt;


        // int n = nums.size();
        // int sum = 0, left = 0, subCount = 0;
        // for(int i = 0; i < n; i++) {
        //     sum += nums[i];
        //     while(sum > k) {
        //         sum -= nums[left];
        //         left++;
        //     }
        //     if(sum == k) {
        //         subCount++;
        //     }
        // }
        // return subCount;

        // for(int i = 0; i < n; i++) {
        //     if()
        // }
    }
};