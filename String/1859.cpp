class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);
        string word = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= '1' && s[i] <= '9') {
                v[s[i] - '0'] = word + " ";
                word = "";
                i++;
            }
            else {
                word += s[i];
            }
        }
        string sentence = "";
        for(string i : v) {
            sentence += i;
        }
        sentence.pop_back();
        return sentence;
    }
};