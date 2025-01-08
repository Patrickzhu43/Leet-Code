class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        while (left < s.size()-left-1) {
            swap(s[left], s[s.size()-1-left]);
            left++;
        }
    }
};