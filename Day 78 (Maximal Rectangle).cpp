class Solution {
public:
    vector<int> nextsmall(int* heights, int n)
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

    vector<int> previous(int* heights, int n)
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

    int largestRectangleArea(int* heights, int n) {
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

    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mat[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=matrix[i][j]-'0';
            }
        }
        int area=largestRectangleArea(mat[0],n);
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    mat[i][j]=0;
                }
                else
                {
                    mat[i][j]=mat[i][j]+mat[i-1][j];
                }
            }
            area=max(area,largestRectangleArea(mat[i],n));
        }
        return area;
    }
};
