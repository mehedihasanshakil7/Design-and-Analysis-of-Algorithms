class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> sc;
        for(auto c : s) {
            sc.insert(c);
        }
        if(sc.size() == 26) {
            return true;
        }
        return false;
    }
};