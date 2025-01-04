class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        result.push_back(1);
        for (int i = 1; i < n; i++) {
            result.push_back(result[i-1] * nums[i-1]);
        }
        int right = 1;
        for (int i = n-2; i >= 0; i--) {
            right *= nums[i+1];
            result[i] *= right;
        }
            
        return result;
    }
};