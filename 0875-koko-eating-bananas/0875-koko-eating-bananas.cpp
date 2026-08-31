class Solution {
public:
    bool canEat(vector<int>& piles, int h, int k) {
        int hrs = 0;
        for(int pile: piles) {
            hrs += (pile + k - 1) / k;
            if(hrs > h) {
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canEat(piles, h, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};