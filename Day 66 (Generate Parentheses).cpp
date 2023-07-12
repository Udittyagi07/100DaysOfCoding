class Solution {
public:
    void solve(string res, int str, int end, vector<string> &ans){
        if(str== 0 && end== 0){
            ans.push_back(res);
            return;
        }
        if(str==end){
            string temp = res;
            temp.push_back('(');
            solve(temp,str-1,end,ans);
        }
        else if(str == 0)
        { 
            string temp=res;
            temp.push_back(')');
            solve(temp,str,end-1,ans);
        }
        else if(end == 0){
            string temp=res;
            temp.push_back('(');
            solve(temp,str-1,end,ans);
        }
        else{
            string temp=res;
            string temp_=res;
            temp.push_back('(');
            temp_.push_back(')');
            solve(temp,str-1,end,ans);
            solve(temp_,str,end-1, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        int str=n;
        int end=n;
        vector<string> ans;
        string res= "";
        solve(res,str,end,ans);
        return ans;
    }
};
