#include<stack>
class Solution {
public:
    string reverseWords(string s) {
        stack<char> temp;
        string ans="";
        bool check=0;
        for(int i=s.length()-1; i>=0 ;i--)
        {
            if(s[i]==' ')
            {
                while(!temp.empty())
                {
                    check=1;
                    ans.push_back(temp.top());
                    temp.pop();
                }       
                if(check==1)
                {
                    check=0;
                    ans.push_back(' ');
                }
            }
            else
            {
                temp.push(s[i]);
            }
        }
        while(!temp.empty())
        {
            ans.push_back(temp.top());
            temp.pop();
        }
        if(ans[ans.size()-1]==' ')
        {
            ans.pop_back();
        }
        return ans;
    }
};
