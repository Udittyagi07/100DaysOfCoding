class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            if(temp==k)
            {
                ans++;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                temp=(temp*nums[j])/(gcd(temp,nums[j]));
                if(temp==k)
                {
                    ans++;
                }
                else if(temp<k)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};
