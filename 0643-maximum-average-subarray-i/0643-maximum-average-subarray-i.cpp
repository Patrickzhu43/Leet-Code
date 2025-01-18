class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k - 1;
        double max_sum;
        for (int i = 0; i < k; i++) {
            max_sum += nums[i];
        }
        double sum = max_sum;
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i-k];
            max_sum = max(max_sum, sum);
        }
        return max_sum / k;
    }
};