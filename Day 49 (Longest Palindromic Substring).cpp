class Solution {
public:
    void check(string& s, int str, int end, string& ans)
    {
        while(str>=0 && end<s.size())
        {
            if(s[str]!=s[end])
            {
                break;
            }
            str--;
            end++;
        }
        if(ans.size()<end-str)
        {
            ans=s.substr(str+1, end-str-1);
        }
    }
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            check(s,i,i,ans);
            check(s,i,i+1,ans);
        }
        return ans;
    }
};
