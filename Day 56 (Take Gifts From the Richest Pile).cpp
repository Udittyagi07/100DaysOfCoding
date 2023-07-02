class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int index;    
        while(k>0)
        {
            int maximum=INT_MIN;
            for(int i=0;i<gifts.size();i++)
            {
                if(gifts[i]>maximum)
                {
                    maximum=gifts[i];
                    index=i;
                }
            }
            gifts[index]=sqrt(maximum);
            k--;
        }
        long long int sum=0;
        for(int i=0;i<gifts.size();i++)
        {
            sum+=gifts[i];
        }
        return sum; 
    }
};
