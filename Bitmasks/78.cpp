class Solution {
public:
    vector<vector<int>> subsets(vector<int>& set) {
        int n = set.size();
        int subsets = 1<<n;
        vector<vector<int>> v;
        vector<int> temp;
        for(int k = 0; k < subsets; k++) {
            for(int i = 0; i < n; i++) {
                if(k & (1<<i)) {
                    temp.push_back(set[i]);
                }
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};