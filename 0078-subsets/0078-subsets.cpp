class Solution {
public:
    void subseq(int idx, int n, vector<int>& nums, vector<int>& ans, vector<vector<int>>& res) {
        if (idx >= n) {
            res.push_back(ans);
            return;
        }
        subseq(idx + 1, n, nums, ans, res);
        ans.push_back(nums[idx]);
        subseq(idx + 1, n, nums, ans, res);
        ans.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<vector<int>> res;
        subseq(0, n, nums, ans, res);
        return res;
    }
};
