class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count0++;
            }
            else if(nums[i]==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        int index=0;
        while(index<count0)
        {
            nums[index]=0;
            index++;
        }
        while(index<count0+count1)
        {
            nums[index]=1;
            index++;
        }
        while(index<count2+count1+count0)
        {
            nums[index]=2;
            index++;
        }
        return;
    }
};
