int Solution::hammingDistance(const vector<int> &a) {
    long long n = a.size(), one = 0;
    long long hamming = 0;
    for(int i = 0; i < 32; i++) {
        for(int k = 0; k < n; k++) {
            if(a[k] & (1<<i)) {
                one++;
            }
        }
        long long diff_pairs = one * (n-one);
        hamming += diff_pairs * 2;
        one = 0;
    }
    return hamming % 1000000007;
}