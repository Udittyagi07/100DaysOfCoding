class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                if(st.empty()==false)
                {
                    st.pop();
                }
                if(st.empty()==false)
                {
                    ans=max(ans,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return ans;
    }
};
