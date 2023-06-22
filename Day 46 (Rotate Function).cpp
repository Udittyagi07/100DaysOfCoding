class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int indexsum=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            indexsum=indexsum+(i*nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            indexsum=indexsum-(nums[i]*(nums.size()-1))+sum-nums[i];
            ans=max(indexsum,ans);
        }
        return ans;
    }
};
