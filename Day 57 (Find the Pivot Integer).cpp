class Solution {
public:
    int check(int str, int mid, int end)
    {
        int sum1=0;
        int sum2=0;
        for(int i=str;i<=mid;i++)
        {
            sum1+=i;
        }
        for(int i=mid;i<=end;i++)
        {
            sum2+=i;
        }
        if(sum1==sum2)
        {
            return mid;
        }
        if(sum1>sum2)
        {
            return -1;
        }
        return check(str,mid+1,end);
    }
    int pivotInteger(int n) {
        if(n==1)
        {
            return 1;
        }
        int mid=n/2;
        return check(0,mid,n);
    }
};
