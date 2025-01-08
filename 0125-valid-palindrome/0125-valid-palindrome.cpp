class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        int i = 0;
        int len = s.size();
        while (i < len) {
            if ((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')) {
                s.erase(i,1);
                len--;
            } 
            else {
                i++;
            }
        }
        int left = 0;
        int right = s.size()-1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};