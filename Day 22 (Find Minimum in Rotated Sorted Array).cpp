class Solution {
public:
    int findMin(vector<int>& nums) {
        int str = 0;
        int end=nums.size()-1;
        int mid=(str+end)/2;

        while(str<end)
        {
            if(nums[str]<=nums[end])
            {
                return nums[str];
            }
            if(nums[str]>nums[mid])
            {
                end=mid;
            }
            else if(nums[mid]>nums[end])
            {
                str=mid+1;
            }
            mid=(str+end)/2;
        }
        return nums[str];   
    }
};
