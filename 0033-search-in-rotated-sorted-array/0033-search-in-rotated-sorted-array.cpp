class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while (low < high) {
            mid = low + (high - low) / 2;
            if (nums[mid] < nums[nums.size()-1]) {
                high = mid;
            }
            if (nums[mid] > nums[nums.size()-1]) {
                low = mid + 1;
            }
        }
        int pivot = low;
        cout << pivot;
        low = 0;
        high = nums.size()-1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            int new_mid = (pivot + mid) % nums.size();
            if (nums[new_mid] == target) {
                return new_mid;
            }
            else if (nums[new_mid] < target) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return -1;
    }
};