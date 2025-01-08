class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int res = 0;
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == (nums[i-1]+1)) {
                count++;
            }
            else if (nums[i] == nums[i-1]) {
                continue;
            }
            else {
                res = max(res, count);
                count = 1;
            }
        }
        return max(res, count);
    }
};