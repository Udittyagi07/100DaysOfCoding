class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return nums.size();
        }
        vector<int> ans;
        int i=0;
        while(i<nums.size()-1)
        {
            ans.push_back(nums[i]);
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
            }
            while(nums[i]==nums[i+1] && i+1<nums.size()-1)
            {
                i++;
            }
            i++;
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            ans.push_back(nums[nums.size()-1]);
        }
        nums=ans;
        return ans.size();
    }
};
