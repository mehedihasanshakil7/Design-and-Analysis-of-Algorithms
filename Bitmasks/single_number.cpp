int Solution::singleNumber(const vector<int> &a) {
    int answer = 0;
    for(auto i : a) {
        answer = answer ^ i;
    }
    return answer;
}
