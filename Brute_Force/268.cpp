class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n = nums.size();
        long long sum_upto_n = n * (n+1) / 2;
        long long array_sum = accumulate(nums.begin(), nums.end(), 0);
        return sum_upto_n - array_sum;
    }
};