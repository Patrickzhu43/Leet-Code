class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            if (count.find(nums[i]) == count.end()) {
                count[nums[i]] = 1;
            }
            else {
                count[nums[i]]++;
            }
        }
        for (auto it : count) {
            if (it.second > nums.size()/2) {
                return it.first;
            }
        }
        return 0;
    }
};