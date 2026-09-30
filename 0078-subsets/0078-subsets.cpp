class Solution {
public:
    void allsubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& result) {
        if (i == nums.size()) {
            result.push_back(ans); // Removed extra braces around ans
            return;
        }
        
        // Include 
        ans.push_back(nums[i]);
        allsubs(nums, ans, i + 1, result);
        
        // Exclude  (Backtracking step)
        ans.pop_back();
        allsubs(nums, ans, i + 1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        allsubs(nums, ans, 0, result);
        return result;
    }
};