class Solution {
public:
    int captureForts(vector<int>& forts) {
        int str=-1;
        int end=-1;
        int ans=0;
        for(int i=0;i<forts.size();i++)
        {
            if(forts[i]==1)
            {
                if(str!=-1)
                {
                    ans=max(ans,i-str-1);
                    str=-1;
                }
                end=i;
            }
            else if(forts[i]==-1)
            {
                if(end!=-1)
                {
                    ans=max(ans,i-end-1);
                    end=-1;
                }
                str=i;
            }
        }
        return ans;
    }
};
