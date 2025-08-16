class Solution {
public:
    int maximum69Number (int num) {
        vector<int>digit;
        while(num > 0){
            digit.insert(digit.begin(), num % 10);
            num /= 10;
        }

        for(int i=0; i<digit.size(); i++){
            if(digit[i] == 6){
                digit[i] = 9;
                break;
            }
        }

        int res = 0;
        for(int i: digit){
            res = res * 10 + i;
        }
        return res;
    }
};