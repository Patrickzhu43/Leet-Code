class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> s_char(s.begin(), s.end());
        unordered_map<char, int> check;
        int left = 0;
        int res = 0;
        for (int right = 0; right < s_char.size(); right++) {
            if (check.find(s_char[right]) != check.end() && check[s_char[right]] >= left) {
                left = check[s_char[right]] + 1;
            }
            else {
                res = max(res, right - left + 1);
            }
            check[s_char[right]] = right;
        }
        return res;
    }
};