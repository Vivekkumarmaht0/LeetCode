class Solution {
public:
    int daysNeeded(vector<int> weights, int capacity) {
        int total = 0, requiredDay = 1;
        for(int i: weights) {
            if(total + i > capacity) {
                requiredDay++;
                total = 0;
            }
            total += i;
        }
        return requiredDay;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for(int i: weights) {
            low = max(low, i);
            high += i;
        }

        while(low < high) {
            int mid = low + (high - low) / 2;
            if(daysNeeded(weights, mid) <= days) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};