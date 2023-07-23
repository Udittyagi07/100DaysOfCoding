class Solution {
public:
    vector<int> nextsmall(vector<int> heights, int n)
    {
        stack<int> st;
        st.push(-1);
        vector<int> next(n);
        for(int i=n-1;i>=0;i--)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr)
            {
                st.pop();
            }
            next[i]=st.top();
            st.push(i);
        }
        return next;
    }

    vector<int> previous(vector<int> heights, int n)
    {
        stack<int> st;
        st.push(-1);
        vector<int> prev(n);
        for(int i=0;i<n;i++)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr)
            {
                st.pop();
            }
            prev[i]=st.top();
            st.push(i);
        }
        return prev;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        next=nextsmall(heights,n);
        vector<int> prev(n);
        prev=previous(heights,n);
        int area=0;
        for(int i=0;i<n;i++)
        {
            if(next[i]==-1)
            {
                next[i]=n;
            }
            area=max(area, (heights[i]*(next[i]-prev[i]-1)));
        }
        return area;
    }
};
