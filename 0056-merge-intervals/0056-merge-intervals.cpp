class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int res_idx = 0;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++) {
            if (result.size() == 0) {
                result.push_back(intervals[i]);
            }
            else if (intervals[i][0] <= result[res_idx][1]) {
                result[res_idx][1] = max(intervals[i][1], result[res_idx][1]);
            }
            else {
                result.push_back(intervals[i]);
                res_idx++;
            }
        }
        return result;
    }
};