class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // if(nums.empty()) {
        //     return {-1, -1};
        // }

        int n = nums.size();
        int low = 0, high = n - 1;
        int first = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] >= target) {
                if(nums[mid] == target) {
                    first = mid;
                }
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        low = 0, high = n - 1;
        int last = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] <= target) {
                if(nums[mid] == target) {
                    last = mid;
                }
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};


        // vector<int> arr;
        // int n = nums.size();
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] == target) {
        //         arr.push_back(i);
        //         break;
        //     }
        // }
        // for(int i = n-1; i >= 0; i--) {
        //     if(nums[i] == target) {
        //         arr.push_back(i);
        //         break;
        //     }
        // }
        // if(arr.empty()){
        //     return {-1, -1};
        // }
        // return arr;


        // int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        // int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        // if(first != last) {
        //     return {first, last - 1};
        // }
        // return {-1, -1};
    }
};