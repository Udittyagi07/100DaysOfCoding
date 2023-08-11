class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums[0]>nums[1])  
        {
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2])
        {
            return nums.size()-1;
        }
        int str=1;
        int end=nums.size()-2;
        while(str<=end)
        {
            int mid=(str+end)/2;
            if(nums[mid-1]<nums[mid] && nums[mid+1]<nums[mid])
            {
                return mid;
            }
            else if(nums[mid-1]<nums[mid])
            {
                str=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};
