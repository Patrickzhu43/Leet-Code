class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        result.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            result.push_back(result[i-1] * nums[i-1]);
        }
        int right = 1;
        for (int i = nums.size()-2; i >= 0; i--) {
            right *= nums[i+1];
            result[i] *= right;
        }
            
        return result;
    }
};