class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> phash(26), shash(26);
       vector<int> v;
       for(int i = 0; i < p.size(); i++) {
           phash[p[i]-'a']++;
       }
       for(int i = 0; i < s.size(); i++) {
           shash[s[i]-'a']++;
           if(i+1 >= p.size()) {
               if(phash == shash) {
                   v.push_back(i+1-p.size());
               }
               shash[s[i-p.size()+1]-'a']--;
           }
       }
       return v;
    }
};