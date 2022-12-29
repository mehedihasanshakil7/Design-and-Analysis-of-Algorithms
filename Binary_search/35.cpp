class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int low = 0;
        int high = v.size()-1;
        int mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(v[mid] > target) high = mid-1;
            else if(v[mid] < target) low = mid+1;
            else return mid;
        }
        return low; //return insertion position
    }
};
