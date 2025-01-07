class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target-nums[i];
            if (nums_map.find(diff) != nums_map.end()) {
                return {nums_map[diff], i};
            }
            nums_map[nums[i]] = i;
        }
        return {};

    }
};