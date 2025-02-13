class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        recursive(res, temp, n, 1, k);
        return res;
    }
private:
    void recursive(vector<vector<int>>& res, vector<int>& temp, int n, int left, int k) {
        if (k == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = left; i <= n; i++) {
            temp.push_back(i);
            recursive(res, temp, n, i+1, k-1);
            temp.pop_back();
        }
    }
};