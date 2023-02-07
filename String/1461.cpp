class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        set<string> ss;
        int codes = pow(2, k);
        for(int i = 0; i <= n - k; i++) {
            ss.insert(s.substr(i, k));
        }
        if(ss.size() == codes) {
            return true;
        }
        return false;
    }
};