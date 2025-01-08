class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9] = {0};
        int cols[9] = {0};
        int squares[9] = {0};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                int num = board[i][j]-'0';
                int sq = (i/3)*3 + j/3;
                int mask = 1 << num;
                if (rows[i] & mask || cols[j] & mask || squares[sq] & mask) {
                    return false;
                }
                rows[i] |= mask;
                cols[j] |= mask;
                squares[sq] |= mask;
            }
        }
        return true;
    }
};