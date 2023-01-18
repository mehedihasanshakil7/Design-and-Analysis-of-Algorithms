class Solution {
public:
    int mySqrt(int n) {
        long long l = 0, r = n/2;
        long long mid = (l+r)/2;
        while(l <= r) {
            if(mid * mid < n) {
                l = mid + 1;
            }
            else if(mid * mid > n) {
                r = mid - 1;
            }
            else {
                break;
            }
            mid = (l + r) / 2;
        }
        return n == 1 ? 1 : mid;
    }
};