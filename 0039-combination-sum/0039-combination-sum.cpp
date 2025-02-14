class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        recursive(candidates, res, temp, target, 0, 0);
        return res;
    }
        
private:
    void recursive(vector<int>& candidates, vector<vector<int>>& res, vector<int>& temp, int target, int left, int sum) {
        if (sum == target) {
            res.push_back(temp);
            return;
        }
        if (sum > target || left == candidates.size()) {
            return;
        }
        recursive(candidates, res, temp, target, left+1, sum);
        temp.push_back(candidates[left]);
        recursive(candidates, res, temp, target, left, sum+candidates[left]);
        temp.pop_back();
    }
};