class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charmap[26] = {0};
        //unordered_map<char, int> mag;
        for (int i = 0; i < magazine.size(); i++) {
            charmap[magazine[i] - 'a']++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            charmap[ransomNote[i] - 'a']--;
            if (charmap[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }
        return true;

    }
};