class Solution {
public:
    bool isFound(vector<int>& v, int item) {
        int l = 0, r = v.size()-1, mid;
        while(l <= r) {
            mid = (l+r) / 2;
            if(item < v[mid]) {
                r = mid - 1;
            }
            else if(item > v[mid]) {
                l = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        set<int> s;
        for(auto i : nums2) {
            if(isFound(nums1, i)) {
                s.insert(i);
            }
        }
        vector<int> v;
        for(auto i : s) {
            v.push_back(i);
        }
        return v;
    }
};