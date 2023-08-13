class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int i=0;i<spells.size();i++)
        {
            int str=0;
            int end=potions.size()-1;
            while(str<=end)
            {
                int mid=(str+end)/2;
                if(spells[i]*1ll*potions[mid]>=success)
                {
                    end=mid-1;
                }
                else
                {
                    str=mid+1;
                }
            }
            ans.push_back(potions.size()-str);
        }
        return ans;
    }
};
