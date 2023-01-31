class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), missing = 0;
        for(int i = 0; i < n; i++) {
            missing = missing ^ (nums[i] ^ i);
        }
        missing = missing ^ n;
        return missing;
    }
};