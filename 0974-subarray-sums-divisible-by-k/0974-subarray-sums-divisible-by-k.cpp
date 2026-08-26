class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int subCnt = 0, prefixSum = 0, req;
        map<int, int> freq = {{0,1}};

        for(int i = 0; i < n; i++) {
            prefixSum += nums[i];
            req = ((prefixSum % k) + k) % k;

            if(freq.find(req) != freq.end()) {
                subCnt += freq[req];
            }
            freq[req]++;
        }
        return subCnt;
    }
};