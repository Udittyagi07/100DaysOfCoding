class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int str=0;
        int end=k-1;
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(end<nums.size())
        {
            ans=min(nums[end]-nums[str],ans);
            str++;
            end++;
        }
        return ans;
    }
};
