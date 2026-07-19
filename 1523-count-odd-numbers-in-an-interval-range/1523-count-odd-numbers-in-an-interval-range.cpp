class Solution {
public:
    int countOdds(int low, int high) {
        long long cntOdd = 0;
        for(int i = low; i <= high; i++) {
            if(i % 2 != 0) {
                cntOdd++;
            }
        }
        return cntOdd;
    }
};