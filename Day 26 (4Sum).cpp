class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> arr;
        map<vector<int>,int>check;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int str=j+1;
                int end=nums.size()-1;
                while(str<end)
                {
                    long long sum =nums[str]+nums[end]+nums[i]*1ll+nums[j];
                    if(sum==target)
                    {
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]); 
                        ans.push_back(nums[str]);
                        ans.push_back(nums[end]);
                        if(check[ans]==0)
                        {
                            check[ans]=1;
                            arr.push_back(ans);
                        }
                        str++;
                    }
                    else if(sum<target)
                    {
                        str++;
                    }
                    else
                    {
                        end--;
                    }
                }
            }
        }   
        return arr;  
    }
};
