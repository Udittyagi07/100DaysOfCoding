class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        int j;
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break;
            }
        }
        if(i<0)
        {
            return reverse(nums.begin(),nums.end());
        }
        else
        {
            for(j=nums.size()-1;j>i;j--)
            {
                if(nums[i]<nums[j])
                {
                    break;
                }  
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
