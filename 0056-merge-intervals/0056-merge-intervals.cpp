class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        for (vector<int> interval : intervals) {
            if (result.empty() || interval[0] > result.back()[1]) {
                result.push_back(interval);
            }
            else {
                result.back()[1] = max(interval[1], result.back()[1]);
            }
        }
        return result;
    }
};