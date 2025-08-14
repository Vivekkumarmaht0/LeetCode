class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.size() < 3) return "";
        char digit = 0;
        for(int i=0; i<num.size()-2; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                digit = max(digit, num[i]);
            }
        }
        if(digit == 0) return "";
        return string(3, digit);
    }
};