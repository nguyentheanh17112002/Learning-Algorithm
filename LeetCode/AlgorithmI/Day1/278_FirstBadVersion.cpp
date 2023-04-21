// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
        long long  l = 0, r = n;
        long long mid = (l+r)/2;
        long long res = -1;
        while(l <= r){
            if(isBadVersion(mid)){
                res = mid;
                r = mid - 1;
                mid = (l+r)/2;
            }
            else{
                l = mid + 1;
                mid = (l+r)/2;
            }
        }
        return res;
    }
};