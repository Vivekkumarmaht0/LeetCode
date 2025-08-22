class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>arr(2);
        int left = 0;
        int right = numbers.size() - 1;
        int n = numbers.size();
        for(int i=0; i<n; i++){
            if(numbers[left] + numbers[right] == target){
                arr[0] = left+1;
                arr[1] = right+1;
                break;
            } else if((numbers[left] + numbers[right]) > target){
                right--;
            } else{
                left++;
            }
        }
        return arr;
    }
};