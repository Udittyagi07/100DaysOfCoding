class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans=-1;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                {
                    ans=max(ans,money-(prices[i]+prices[j]));
                }
            }
        }
        if(ans<0)
        {
            return money;
        }
        return ans;
    }
};
