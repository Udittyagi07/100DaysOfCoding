class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> nums,int index)
    {
        if(index>=nums.size())
        {
            if((find(ans.begin(), ans.end(), nums))==ans.end())
            {
                ans.push_back(nums);
                return;
            }
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            solve(ans,nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;   
    }
};
