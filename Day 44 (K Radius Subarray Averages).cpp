class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),-1 );
        if(nums.size()<=k)
        {
            return ans;
        }
        int i=0;
        while(i<k)
        {
            i++;
        }
        vector<long long int> sum(nums.size()+1);
        for(int i=0;i<nums.size();i++)
        {
            sum[i+1]=sum[i]+nums[i];
        }
        for(i;i<nums.size();i++)
        {
            if(i+k>=nums.size())
            {
                return ans;
            }
            ans[i]=(sum[i+k+1]-sum[i-k])/(2*k +1);
        }
        return ans;
    }
};
