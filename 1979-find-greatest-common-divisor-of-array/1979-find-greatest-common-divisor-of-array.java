class Solution {
    public int gcd(int a, int b){
        if(a == 0) return b;
        return gcd(b % a, a);
    }

    public int findGCD(int[] nums) {
        int min = nums[0];
        int max = nums[0];
        for(int i=1; i<nums.length; i++){
           min = Math.min(nums[i], min);
           max = Math.max(nums[i], max);
        }
        return gcd(min, max);
    }
}