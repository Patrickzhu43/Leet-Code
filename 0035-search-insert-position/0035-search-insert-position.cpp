class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int res = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            res = mid;
            if (nums[mid] < target) {
                low = mid+1;
                //res = low;
            }
            if (nums[mid] > target) {
                high = mid-1;
                //res = high;
            }
            if (nums[mid] == target) {
                return mid;
            }
            cout << res << endl;
        }
        if (nums[res] < target) {
            res++;
        }
        return res;
    }
};