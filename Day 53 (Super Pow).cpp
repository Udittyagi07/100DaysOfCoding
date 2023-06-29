class Solution {
public:
    int solve(int a, int last)
    {
        a=a%1337;
        int result=1;
        for(int i=1;i<=last;i++)
        {
            result=(result*a)%1337;
        }
        return result;
    }
    int superPow(int a, vector<int>& b){
        if(b.empty()==true)
        {
            return 1;
        }
        int last=b[b.size()-1];
        b.pop_back();
        return (solve(superPow(a,b),10)*solve(a,last))%1337;  
    }
};
