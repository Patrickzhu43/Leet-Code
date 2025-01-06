class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charmap[123] = {0};
        //unordered_map<char, int> mag;
        for (int i = 0; i < magazine.size(); i++) {
            charmap[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            charmap[ransomNote[i]]--;
            if (charmap[ransomNote[i]] < 0) {
                return false;
            }
        }
        return true;

    }
};