class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> note;
        //unordered_map<char, int> mag;
        for (auto letter : ransomNote) {
            note[letter]++;
        }
        for (auto letter : magazine) {
            note[letter]--;
        }
        for (auto x : note) {
            if (x.second > 0) {
                return false;
            }
        }
        return true;

    }
};