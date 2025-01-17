class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i_low = 0;
        int i_high = matrix.size()-1;
        int j_high = matrix[0].size()-1;
        int j_low = 0;
        int i_mid;
        while (i_low <= i_high) {
            i_mid = i_low + (i_high - i_low) / 2;
            if (matrix[i_mid][0] > target) {
                i_high = i_mid - 1;
            }
            else if (matrix[i_mid][j_high] < target) {
                i_low = i_mid + 1;
            }
            else {
                break;
            }
        }
        while (j_low <= j_high) {
            int j_mid = j_low + (j_high - j_low) / 2;
            if (matrix[i_mid][j_mid] < target) {
                j_low = j_mid + 1;
            }
            else if (matrix[i_mid][j_mid] > target) {
                j_high = j_mid - 1;
            }
            else {
                return true;
            }
        }
        return false;

    }
};