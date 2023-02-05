class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> s;
        for(auto i : words) {
            map<char, char> m1, m2;
            bool match = true;
            for(int j = 0; j < i.size(); j++) {
                auto it1 = m1.find(pattern[j]);
                auto it2 = m2.find(i[j]);
                if(it1 == m1.end()) {
                    m1[pattern[j]] = i[j];
                }
                else {
                    if(m1[pattern[j]] != i[j]) {
                        match = false;
                        break;
                    }
                }
                if(it2 == m2.end()) {
                    m2[i[j]] = pattern[j];
                }
                else {
                    if(m2[i[j]] != pattern[j]) {
                        match = false;
                        break;
                    }
                }
            }
            if(match)
            s.push_back(i);
        }
        return s;
    }
};