class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int left = 0;
        int right = nums.size()-1;
        while (left <= right) {
            if (abs(nums[left]) >= abs(nums[right])) {
                result.insert(result.begin(), nums[left] * nums[left]);
                left++;
            }
            else {
                result.insert(result.begin(), nums[right] * nums[right]);
                right--;
            }
        }
        return result;
    }
};