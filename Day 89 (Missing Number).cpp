class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        int i=0;
        while(i<nums.size())
        {
            if(j==nums[i])
            {
                j++;
                i++;
            }
            else if(j>nums[i])
            {
                i++;
            }
            else
            {
                return j;
            }
        }
        return j;
    }
};
