class Solution {
public:
    string convert(int n,int i)
    {
        string ans="";
        while(n>0)
        {
            ans.push_back(n%i);
            n=n/i;
        }
        return ans;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++)
        {
            string result=convert(n,i);
            for(int j=0;j<result.size()/2;j++)
            {
                if(result[j]!=result[result.size()-1-j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
