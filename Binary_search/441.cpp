class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 1, r = n, mid;
        while(l <= r) {
            mid = (l+r) / 2;
            long long required_coin = mid * (mid+1) / 2;
            if(required_coin > n) {
                r = mid - 1;
            }
            else if(required_coin < n) {
                l = mid + 1;
            }
            else {
                return mid;
            }
        }
        return r;
    }
};