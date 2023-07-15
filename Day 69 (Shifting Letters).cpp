class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long long int> sum(s.size()+1,0);
        for(int i=shifts.size()-1;i>=0;i--)
        {
            sum[i]=sum[i+1]+shifts[i];
        }
        for(int i=0;i<s.size();i++)
        {
            long long num=(sum[i]+s[i]-'a')%26;
            s[i]=char(num+'a');
        }
        return s;
    }
};
