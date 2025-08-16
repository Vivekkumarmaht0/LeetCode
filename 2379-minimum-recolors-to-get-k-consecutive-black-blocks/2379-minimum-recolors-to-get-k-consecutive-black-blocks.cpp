class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int s = 0;
        int count = 0;
        int ans = 100;
        while(k <= blocks.size()){
            for(int i=s; i<k; i++){
                if(blocks[i] == 'W'){
                    count++;
                }
            }
            if(count < ans) ans = count;
            count = 0;
            s++;
            k++;
        }
        return ans;
    }
};