class Solution {
public:
    int bulbSwitch(int n) {
        int i=1;
        int count=0;
        while(i*i<=n)
        {
            i++;
            count++;
        }
        return count;
    }
};
