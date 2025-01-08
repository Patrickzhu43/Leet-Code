class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size()-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int target = -nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while (left < right) {
                if (nums[left]+nums[right] < target) {
                    left++;
                }
                else if (nums[left]+nums[right] > target) {
                    right--;
                }
                else {
                    vector<int> triplet = {nums[i], nums[left], nums[right]};
                    res.push_back(triplet);
                    while (left < right && nums[left] == triplet[1]) {
                        left++;
                    }
                    while (left < right && nums[right] == triplet[2]) {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};