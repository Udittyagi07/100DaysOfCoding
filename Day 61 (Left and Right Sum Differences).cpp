class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        int i=0;
        int sum=0;
        while(i<nums.size()-1)
        {
            sum=sum+nums[i];
            left.push_back(sum);
            i++;
        } 
        sum=0;
        for(int j=1;j<nums.size();j++)
        {
            sum=sum+nums[j];
        }
        right.push_back(sum);
        int j=1;
        while(j<nums.size())
        {
            sum=sum-nums[j];
            right.push_back(sum);
            j++;
        }

        for(int k=0;k<nums.size();k++)
        {
            if(left[k]>right[k])
            {
                ans.push_back(left[k]-right[k]);
            }
            else
            {
                ans.push_back(right[k]-left[k]);
            }
        }
        return ans;
    }
};
