class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> ans(n,0);
        vector<int> result;
        int position=0;
        int mul=1;
        while(ans[position]==0)
        {
            ans[position]=1;
            position=(position+(mul*k))%n ;
            mul++;
        }

        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)
            {
                result.push_back(i+1);
            }
        }
        return result;
    }
};
