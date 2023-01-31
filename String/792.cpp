class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char, vector<int>> m;
        for(int i = 0; i < s.length(); i++) {
            m[s[i]].push_back(i);
        }
        int n = words.size(), count = 0;
        for(int i = 0; i < n; i++) {
            string current = words[i];
            int prev_index = -1;
            for(int j = 0; j < current.size(); j++) {
                auto it = upper_bound(m[current[j]].begin(), m[current[j]].end(), prev_index);
                if(it == m[current[j]].end()) {
                    break;
                }
                prev_index = *it;
                if(j == current.size() - 1) {
                    count++;
                }
            }
        }
        return count;
    }
};