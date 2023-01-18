class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1, r = num, mid;
        while(l <= r) {
            mid = (l + r) / 2;
            if(mid * mid > num) {
                r = mid - 1;
            }
            else if(mid * mid < num) {
                l = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};