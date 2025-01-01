class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int cur = abs(nums[0]);
        int cur_val = nums[0];
        for (int i = 1; i < size(nums); i++) {
            int temp = abs(nums[i]);
            int temp_val = nums[i];
            if (temp < cur || (temp == cur && temp_val > cur_val)) {
                cur = temp;
                cur_val = temp_val;
            }
        }
        return cur_val;
    }
};
