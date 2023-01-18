class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int> s;
        int a = 0, b = 0;
        while(1) {
            if(nums1[a] == nums2[b]) {
                s.insert(nums1[a]);
                a++; b++;
            }
            else if(nums1[a] > nums2[b]) {
                b++;
            }
            else if(nums1[a] < nums2[b]) {
                a++;
            }
            if(a >= nums1.size() || b >= nums2.size()) {
                break;
            }
        }
        vector<int> v;
        for(auto i : s) {
            v.push_back(i);
        }
        return v;
    }
};