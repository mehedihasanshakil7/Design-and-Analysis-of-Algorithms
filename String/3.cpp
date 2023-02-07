class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> sc;
        int longest = 0;
        int left = 0, right = 0;
        int n = s.length();
        while(right < n) {
            auto it = sc.find(s[right]);
            if(it == sc.end()) {
                sc.insert(s[right]);
                right++;
            }
            else {
                sc.erase(s[left]);
                left++;
            }
            longest = sc.size() > longest ? sc.size() : longest;
        }
        return longest;
    }
};