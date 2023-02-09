class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<int> v(n, 1);
        k = k - n;
        int i = n-1;
        while(k) {
            if(k > 25) {
                v[i] = 26;
                i--;
                k = k - 25;
            }
            else {
                v[i] = k + 1;
                k = 0;
            }
        }
        string s;
        for(int i : v) {
            char c = i + 96;
            s += c;
        }
        return s;
    }
};