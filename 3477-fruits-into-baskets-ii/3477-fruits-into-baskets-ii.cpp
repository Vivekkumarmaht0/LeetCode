class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt = 0;
        int j = 0;
        while (j < fruits.size()) {
            for (int i = 0; i < baskets.size(); i++) {
                if (i == baskets.size() - 1 &&  fruits[j] > baskets[i]) {
                    cnt++;
                }
                if ( fruits[j] <= baskets[i]) {
                    baskets[i] = 0;
                    break;
                }
            }
             
            j++;
        }
        return cnt;
    }
};