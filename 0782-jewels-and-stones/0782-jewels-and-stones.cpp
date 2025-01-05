class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        for (int i = 0; i < jewels.size(); i++) {
            res += count(stones.begin(), stones.end(), jewels[i]);
        }
        return res;
    }
};