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
                    res.push_back({nums[i], nums[left], nums[right]});
                    int tl = nums[left];
                    int tr = nums[right];
                    while (left < right && nums[left] == tl) {
                        left++;
                    }
                    while (left < right && nums[right] == tr) {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};