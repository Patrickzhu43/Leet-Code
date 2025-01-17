class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < nums[nums.size()-1]) {
                high = mid;
            }
            if (nums[mid] > nums[nums.size()-1]) {
                low = mid + 1;
            }
            cout << low << endl;
        }
        return nums[low];
    }
};