class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int avgSum = INT_MIN;
        int windowSum = 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            windowSum += arr[i];

            if(i >= k - 1) {
                if(windowSum / k >= threshold) {
                    count++;
                }
                windowSum -= arr[i - (k - 1)];
            }
        }
        return count;
    }
};