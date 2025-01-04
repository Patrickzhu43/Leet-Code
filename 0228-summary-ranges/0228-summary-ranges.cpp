class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summary;
        int rangeStart;
        int rangeEnd;
        for (int i = 0; i < nums.size(); i++) {
            rangeStart = nums[i];
            rangeEnd = nums[i];
            while (i+1 < nums.size() && nums[i+1] == 1 + nums[i]) {
                i++;
                rangeEnd = nums[i];
            }
            if (rangeEnd == rangeStart) {
                summary.push_back(to_string(rangeStart));
            }
            else {
                summary.push_back(to_string(rangeStart) + "->" + to_string(rangeEnd));
            }
        }
        return summary;
    }
};