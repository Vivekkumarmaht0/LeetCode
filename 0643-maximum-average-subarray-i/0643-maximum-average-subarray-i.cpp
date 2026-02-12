class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long maxAvg = LLONG_MIN;
        long long windowSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            windowSum += nums[i];

            if(i >= (k - 1)) {
                maxAvg = max(maxAvg, windowSum);
                windowSum -= nums[i - (k - 1)];
            }
        }
        return (double)maxAvg / k;
    }
};