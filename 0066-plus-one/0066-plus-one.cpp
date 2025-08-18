class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != 9) {
                digits[i]++;
                break;
            } else {
                digits[i] = 0;
            }
        }
        if (digits[0] == 0) {     
            vector<int>arr(digits.size()+1,0);    
            arr[0] = 1;                                
            return arr;
        }
        return digits;
    }
};