class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        int s1count[26] = {0};
        int s2count[26] = {0};
        vector<char> s1c(s1.begin(), s1.end());
        vector<char> s2c(s2.begin(), s2.end());
        int matches = 0;
        for (int i = 0; i < s1c.size(); i++) {
            s1count[s1c[i] - 'a']++;
            s2count[s2c[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            matches += (s1count[i] == s2count[i]) ? 1 : 0;
        }
        int left = 0;
        for (int right = s1.size(); right < s2.size(); right++) {
            if (matches == 26) {
                return true;
            }
            int index = s2c[right] - 'a';
            s2count[index]++;
            if (s2count[index] == s1count[index]) {
                matches++;
            }
            else if (s2count[index] == s1count[index]+1) {
                matches--;
            }

            index = s2c[left] - 'a';
            s2count[index]--;
            if (s2count[index] == s1count[index]) {
                matches++;
            }
            else if (s2count[index] == s1count[index]-1) {
                matches--;
            }
            left++;
        }
        return (matches == 26) ? true : false;
    }
};