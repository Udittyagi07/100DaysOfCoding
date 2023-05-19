// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int str=1;
        long long end=n;

        long long int mid=(str+end)/2;
        while(str<=end)
        {
            if(isBadVersion(mid))
            {
                if(isBadVersion(mid-1)!=true)
                {
                    return mid;
                }
                end=mid-1; 
            }
            else
            {
                str=mid+1;
            }
            mid=(str+end)/2;
        }
    return str;
    }
};
