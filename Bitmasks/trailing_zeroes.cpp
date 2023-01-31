int Solution::solve(int a) {
    int zero = 0;
    while(!(a % 2)) {
        a = a>>1;
        zero++;
    }
    return zero;
}