class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> ans;
        int index=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<index)
            {
                return true;
            }

            while((ans.empty()==false) && nums[i]>ans.top())
            {
                index=ans.top();
                ans.pop();
            }
            ans.push(nums[i]);
        }
        return false;  
    }
};
