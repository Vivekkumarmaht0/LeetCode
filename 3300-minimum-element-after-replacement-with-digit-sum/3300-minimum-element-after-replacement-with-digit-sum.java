class Solution {
    public int minElement(int[] nums) {
        int min = 9999;
        int sum = 0, rem = 0;
        for(int i = 0; i < nums.length; i++){
            int temp = nums[i];
            while(temp > 0){
                rem = temp%10;
                sum += rem;
                temp /= 10;
            }
            min =  Math.min(min, sum);
            sum = 0;
        }
        return min;
    }
}