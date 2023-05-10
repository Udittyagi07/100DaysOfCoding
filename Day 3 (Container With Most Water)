class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int str=0;
        int n=height.size();
        int end=n-1;

        while(str<end)
        {
            int prod=(min(height[str],height[end]))*(end-str);
            ans=max(ans,prod);

            if(height[str]<height[end])
            {
                str++;
            }
            else
            {
                end--;
            }
        }
        return ans;
    }
};
