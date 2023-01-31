unsigned int Solution::reverse(unsigned int a) {
    unsigned int reverse = 0;
    for(int i = 0; i < 32; i++) {
        if(a & 1) {
            reverse = 1<<(31-i) | reverse;
        }
        a = a>>1;
    }
    return reverse;
}