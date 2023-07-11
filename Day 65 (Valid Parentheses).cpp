#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else if(st.top()=='{' && s[i]=='}')
            {
                st.pop();
            }
            else if(st.top()=='[' && s[i]==']')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }    
        if(st.top()==-1)
        {
        return true;
        }
        return false;
    }
};
