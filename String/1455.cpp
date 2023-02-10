class Solution {
public:
    int isPrefixOfWord(string s, string word) {
        string prefix;
        int count = 1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                prefix += s[i];
                if(prefix.size() == word.size()) {
                    if(prefix == word) {
                        return count;
                    }
                }
            }
            else {
                count++;
                prefix = "";
            }
        }
        return -1;
    }
};