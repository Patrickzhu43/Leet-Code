class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid != 0 && nums[mid-1] > nums[mid]){ 
                return nums[mid];
            }
            if (mid != nums.size()-1 && nums[mid+1] < nums[mid]) {
                return nums[mid+1];
            }
            if (nums[mid] < nums[nums.size()-1]) {
                high = mid - 1;
            }
            if (nums[mid] > nums[nums.size()-1]) {
                low = mid + 1;
            }
        }
        return nums[0];
    }
};