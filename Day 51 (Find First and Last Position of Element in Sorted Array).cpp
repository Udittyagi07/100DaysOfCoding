class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=-1;
        int high=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                low=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                high=i;
                break;
            }
        }
        return {low,high};
    }
};
