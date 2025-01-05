class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        int idx = 0;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= intervals[idx][1]) {
                intervals[idx][1] = max(intervals[i][1], intervals[idx][1]);
            }
            else {
                idx++;
                intervals[idx] = intervals[i];
            }
        }
        intervals.resize(idx+1);
        return intervals;
    }
};