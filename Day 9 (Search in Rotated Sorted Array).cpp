class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str=0;
        int end=nums.size()-1;
        int mid=(str+end)/2;
        while(str<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>=nums[str])
            {
                if(nums[str]<=target && target<=nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    str=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target && nums[end]>=target)
                {
                    str=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
            mid=(str+end)/2;
        }
        return -1;    
    }
};
