class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        int j=0;
        while(j<nums.size())
        {
            if(nums[j]==i)
            {
                j++;
                i++;
            }
            else if(nums[j]<i)
            {
                j++;
            }
            else
            {
                return i;
            }
        }
        return i;
    }
};
