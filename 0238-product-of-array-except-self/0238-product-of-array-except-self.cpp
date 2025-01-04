class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                left.push_back(1);
                right.push_back(1);
            }
            else {
                left.push_back(nums[i-1] * left[i-1]);
                right.insert(right.begin(), right[0] * nums[nums.size() - i]);
            }
    
           
        }
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(left[i] * right[i]);
        }
        return result;
    }
};