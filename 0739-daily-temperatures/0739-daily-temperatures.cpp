class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        int max = 0;
        for (int i = temperatures.size()-1; i >= 0; i--) {
            int curr = temperatures[i];
            if (curr >= max) {
                max = curr;
                continue;
            }
            int days = 1;
            while (temperatures[i + days] <= curr) {
                days += res[i + days];
            }
            res[i] = days;
        }
        return res;
    }
};