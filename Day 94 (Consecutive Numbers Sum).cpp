class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int i=1;
        int count=0;
        while(n>0)
        {
            n=n-i;
            if(n%i==0)
            {
                count++;
            }
            i++;
        }
        return count;
    }
};
