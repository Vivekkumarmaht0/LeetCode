class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        int flag = 0;
        for(int i=0; i<arr.length-2; i++){
            if((arr[i]%2 != 0) && (arr[i+1]%2 != 0) && (arr[i+2]%2 != 0)){
                flag = 1;
                return true;
            } else{
                flag = 0;
            }

        }
        return false;
    }
}