class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> height;
        height.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            height.push_back(gain[i]+height[i]);
        }
        int maximum=0;
        for(int i=0;i<height.size();i++)
        {
            maximum=max(height[i],maximum);
        }
        return maximum;
    }
};
