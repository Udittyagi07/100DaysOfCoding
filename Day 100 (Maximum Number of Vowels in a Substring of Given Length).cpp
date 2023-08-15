class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
        }
        ans=max(count,ans);
        int i=0;
        while(i+k<s.size())
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count--;
            }
            if(s[i+k]=='a'||s[i+k]=='e'||s[i+k]=='i'||s[i+k]=='o'||s[i+k]=='u')
            {
                count++;;
            }
            ans=max(count,ans);
            i++;
        }
        return ans;
    }
};
