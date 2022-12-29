class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int low = 0;
        int high = v.size()-1;
        int mid1, mid2;
        while(low <= high) {
            mid1 = low + (high - low) / 3;
            mid2 = high - (high - low) / 3;
            if(v[mid1] == target) {
                return mid1;
            }
            if(v[mid2] == target) {
                return mid2;
            }
            if(target < v[mid1]) {
                high = mid1 - 1;
            }
            else if(target > v[mid2]) {
                low = mid2 + 1;
            }
            else {
                low = mid1 + 1;
                high = mid2 - 1;
            }
        }
        return low;
    }
};
