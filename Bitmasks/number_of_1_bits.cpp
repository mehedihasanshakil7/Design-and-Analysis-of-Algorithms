int Solution::numSetBits(unsigned int a) {
    int count_one = 0;
    while(a) {
        a = a & (a-1);
        count_one++;
    }
    return count_one;
}
