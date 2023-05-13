class Solution {
public:

    void solve(vector<int> nums, vector<vector<int>>& result, vector<int> ans, int index)
    {
        if(index>=nums.size())
        {
            result.push_back(ans);
            return;
        }

        solve(nums, result, ans,index+1);
        ans.push_back(nums[index]);
        solve(nums,result,ans,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        solve(nums, result, ans,0);
        return result;

    }
};
