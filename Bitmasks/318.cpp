class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int product = 0;
        vector<int> binary(n);
        for(int i = 0; i < n; i++) {
            for(auto c : words[i]) {
                binary[i] = binary[i] | (1<<(c-'a'));
            }
            for(int j = 0; j < i; j++) {
                if(!(binary[i] & binary[j])) {
                int temp = words[i].size() * words[j].size();
                product = product < temp ? temp : product;
                }
            }
        }
        return product;
    }
};