class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int max1 = 0;
        while(l < r){
            int ht = min(height[l], height[r]);
            int wd = r - l;
            int area = ht * wd;
            max1 = max(max1, area);
            if(height[l] < height[r]) l++;
            else r--; 
        }
        return max1;
    }
};