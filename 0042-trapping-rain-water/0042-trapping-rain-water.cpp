class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        int left_max[height.size()];
        int left = 0;
        int right_max[height.size()];
        int right = 0;
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > left) {
                left = height[i];
            }
            left_max[i] = left;
        }
        for (int i = height.size()-1; i >= 0; i--) {
            if (height[i] > right) {
                right = height[i];
            }
            right_max[i] = right;
            res += min(left_max[i], right_max[i]) - height[i];
        }
        
        return res;
    }
};