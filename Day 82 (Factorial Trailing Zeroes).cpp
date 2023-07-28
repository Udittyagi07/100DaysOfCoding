class Solution {
public:
    int solve(int n, int k,int count)
    {
        if(k>n)
        {
            return count;
        }
        count= count+ (n/k);
        return solve(n,k*5,count);
    }
    int trailingZeroes(int n) {
        return solve(n,5,0);
    }
};
