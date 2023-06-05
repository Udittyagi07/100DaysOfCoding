class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0;
        int bob=0;
        int str=0;
        int end=piles.size()-1;

        while(str<end)
        {
            if(piles[str]>piles[end])
            {
                alice+=piles[str];
                bob+=piles[end];
            }
            else
            {
                alice+=piles[end];
                bob+=piles[str];
            }
            str++;
            end--;
        }
        if(alice>bob)
        {
            return true;
        }
        return false;
    }
};
