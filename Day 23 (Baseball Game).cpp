class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> score(n);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {            
                score[j]=score[j-1]+score[j-2];
                j++;
            }
            else if(operations[i]=="D")
            {    
                score[j]=(score[j-1]*2);
                j++;
            }
            else if(operations[i]=="C")
            {
                score[j-1]=0;
                j--;
            }
            else
            {
                score[j]=stoi(operations[i]);
                j++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans += score[i];
        }
        return ans;
    }
};
