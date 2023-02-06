class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev_group = 0, cur_group = 1;
        int n = s.length(), ans = 0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == s[i+1]) {
                cur_group++;
            }
            else {
                ans += min(prev_group, cur_group);
                prev_group = cur_group;
                cur_group = 1;
            }
        }
        ans += min(prev_group, cur_group);
        return ans;
    }
};