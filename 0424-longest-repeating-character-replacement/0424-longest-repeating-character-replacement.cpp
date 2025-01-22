class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<char> s_char(s.begin(), s.end());
        int count[26] = {0};
        int res = 0;
        int left = 0;
        int maxc = 0;
        for (int right = 0; right < s_char.size(); right++) {
            int index = s_char[right] - 'A';
            count[index]++;
            maxc = max(maxc, count[index]);
            while (right - left + 1 - maxc > k) {
                count[s_char[left] - 'A']--;
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};