class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size()/4;
        for(int i=0;i<arr.size()-1;i++)
        {
            int count=1;
            int j=i;
            while(arr[j]==arr[j+1])
            {
                count++;
                if(count>n)
                {
                    return arr[i];
                }
                j++;
            }
        }
        return arr[arr.size()-1];
    }
};
