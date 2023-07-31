class Solution {
public:
    vector<int> solve(int i)
    {
        long long int n=1;
        vector<int> ans;
        ans.push_back(1);
        for(int j=1;j<i;j++)
        {
            n=n*(i-j);
            n=n/j;
            ans.push_back(n);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(solve(i));
        }
        return ans;
    }
};
