class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int str = 0; 
        unordered_map<char,int> t; 
        int length = 0;
        int ans = 0; 
        for(int i=0;i<s.length();i++)
        {
            if(t[s[i]]==0)
            {
                t[s[i]]++; 
                length++;  
            }
            else 
            {
                while(t[s[i]]!=0) 
                {
                    t[s[str]]--; 
                    str++; 
                    length--;  
                }
                t[s[i]]++; 
                length++; 
            }
            if(ans<length)
            {
                ans=length;
            }
        }
        return ans; 
    }
};
