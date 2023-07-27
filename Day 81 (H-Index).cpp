class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int ans=0;
        for(int i=0;i<citations.size();i++)
        {
            int count=citations.size()-i;
            if(count<=citations[i])
            {
                ans=max(count,ans);
            }
        }
        return ans;
    }
};
