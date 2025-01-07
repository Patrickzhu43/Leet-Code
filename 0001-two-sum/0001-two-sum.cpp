class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            if (nums_map.find(target-nums[i]) != nums_map.end()) {
                return {nums_map[target-nums[i]], i};
            }
            nums_map[nums[i]] = i;
            
        }
        return {};

    }
};