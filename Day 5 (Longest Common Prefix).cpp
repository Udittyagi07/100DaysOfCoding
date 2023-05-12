class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
        {
            return "";
        }

        sort(strs.begin(),strs.end());

        string s= strs[0];
        string e=strs[strs.size()-1];

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==e[i])
            {
                ans=ans+s[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
