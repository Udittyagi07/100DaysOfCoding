class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1=0;
        int sum2=0;
        int index1=0;
        int index2=0;

        for(int i=0;i<player1.size();i++)
        {
            sum1+=player1[i];
            sum2+=player2[i];

            if(index1>0)
            {
                sum1+=player1[i];
                index1--;
            }
            if(index2>0)
            {
                sum2+=player2[i];
                index2--;
            }

            if(player1[i]==10)
            {
                index1=2;
            }
            
            if(player2[i]==10)
            {
                index2=2;
            }
        }

        if(sum1>sum2)
        {
            return 1;
        }
        else if(sum2>sum1)
        {
            return 2;
        }
        return 0;
        
    }
};
