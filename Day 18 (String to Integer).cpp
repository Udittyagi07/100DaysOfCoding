class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.length() && s[i]==' ')
        {
            i++;
        }
        s=s.substr(i);
        if(s.length()==0)
        {
            return 0;
        }
        bool check=0;
        if(s[0]=='-')
        {
            check=1;
        }
        long int ans=0;
        int j;
        if(s[0]=='+' || s[0]=='-')
        {
            j=1;
        }
        else
        {
            j=0;
        }
        while(j<s.length())
        {
            if(!(s[j]>='0' && s[j]<='9'))
            {
                break;
            }
            else
            {
                ans = ans*10 + s[j]-'0';
                if(check==1)
                {
                    if(ans*(-1)<INT_MIN)
                    {
                        return INT_MIN;
                    }
                }
                else
                {
                    if(ans>INT_MAX)
                    {
                        return INT_MAX;
                    }
                }
            }
            j++;
        }
        if(check==1)
        {
            return ans*(-1);
        }
        return ans;  
    }
};
