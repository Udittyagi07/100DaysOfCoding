class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        int j=0;
        vector<int> nums(n,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                nums[j++]=1;
            }
            else if(s[i]=='V')
            {
                nums[j++]=5;
            }
            else if(s[i]=='X')
            {
                nums[j++]=10;
            }
            else if(s[i]=='L')
            {
                nums[j++]=50;
            }
            else if(s[i]=='C')
            {
                nums[j++]=100;
            }
            else if(s[i]=='D')
            {
                nums[j++]=500;
            }
            else
            {
                nums[j++]=1000;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if((i<nums.size()-1) && (nums[i]<nums[i+1]))
            {
                ans-=nums[i];
            }
            else
            {
                ans+=nums[i];
            }
        }
        return ans;
    }
};
