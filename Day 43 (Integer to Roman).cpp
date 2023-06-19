class Solution {
public:
    string intToRoman(int num) {
        vector<int> arr1={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> arr2={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        int i=0;
        while(num>0)
        {
            while(num>=arr1[i])
            {
                ans=ans+arr2[i];
                num=num-arr1[i];
            }
            i++;
        }
        return ans;
    }
};
