class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> v;
        int count = 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(isalpha(s[i])) {
                for(int k = 0; k < count; k++) {
                    string x = v[k];
                    x[i] = x[i] - 32;
                    v.push_back(x);
                }
                count += count;
            }
        }
        return v;
    }
};