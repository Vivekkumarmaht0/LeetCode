class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>arr(code.size(),0);
        if(k == 0) return arr;
        int start = 1, sum = 0, end = k;
        if(k < 0){
            start = code.size() - abs(k);
            end = code.size() - 1;
        }
        for(int i=start; i<=end; i++) sum += code[i];
        
        for(int i=0; i<code.size(); i++){
            arr[i] = sum;
            sum -= code[start % code.size()];
            sum += code[(end+1) % code.size()];
            start++;
            end++;
        }
        return arr;
    }
};