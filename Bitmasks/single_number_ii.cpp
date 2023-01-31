int Solution::singleNumber(const vector<int> &a) {
    int single = 0, count_one = 0;
    int n = a.size();
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] & (1<<i)) {
                count_one++;
            }
        }
        if(count_one % 3) {
            single = single | (1<<i);
        }
        count_one = 0;
    }
    return single;
}
