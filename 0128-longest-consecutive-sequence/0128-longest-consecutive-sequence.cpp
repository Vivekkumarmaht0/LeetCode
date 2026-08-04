class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        int n = nums.size();
        map<int, int> freq;
        for(auto i: nums) {
            freq[i]++;
        }

        int cnt = 1;
        int maxCount = 1;
        for(auto i = freq.begin(); i != prev(freq.end()); ++i) {
            auto nextIt = next(i);
            if((nextIt->first - i->first) == 1) {
                cnt++;
            } else {
                cnt = 1;
            }
            maxCount = max(maxCount, cnt);
        }
        return maxCount;
    }
};