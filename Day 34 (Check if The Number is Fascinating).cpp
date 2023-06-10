class Solution {
public:
    bool isFascinating(int n) {
        int n1=n*2;
        int n2=n*3;
        string number="";
        number= to_string(n)+ to_string(n1)+ to_string(n2);
        int arr[10]={0};
        for(auto &i: number)
        {
          arr[i-'0']++;
        }
        if(arr[0]>0)
        {
            return false;
        }
        for(int i=1;i<10;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        return true;
    }
};
