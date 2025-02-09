class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> set;
       vector<vector<int>> res;
       calcSubsets(nums, set, res, 0);
       return res ;
    }
private: 
    void calcSubsets(vector<int>& nums, vector<int>& set, vector<vector<int>>& res, int idx) {
        res.push_back(set);
        for (int i = idx; i < nums.size(); i++) {
            set.push_back(nums[i]);
            calcSubsets(nums, set, res, i+1);
            set.pop_back();
        }
    }
};