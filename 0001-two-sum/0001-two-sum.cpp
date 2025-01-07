class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> nums_idx;
        for (int i = 0; i < nums.size(); i++) {
            nums_idx.push_back({nums[i], i});
        }
        sort(nums_idx.begin(), nums_idx.end());
        int left = 0;
        int right = nums_idx.size()-1;
        while (left < right) {
            int sum = nums_idx[left].first + nums_idx[right].first;
            if (sum == target) {
                return {nums_idx[left].second, nums_idx[right].second};
            }
            if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};