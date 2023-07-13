class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int first=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-1;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(first-target))
                {
                    first=sum;
                }
                if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return first;
    }
};
