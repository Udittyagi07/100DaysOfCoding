class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        int jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0 && jump==i)
            {
                return false;
            }
            jump = max(jump,nums[i]+i);
        }
        return true;    
    }
};
