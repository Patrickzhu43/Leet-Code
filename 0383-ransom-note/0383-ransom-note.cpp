class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> note;
        unordered_map<char, int> mag;
        for (auto letter : ransomNote) {
            note[letter]++;
        }
        for (auto letter : magazine) {
            mag[letter]++;
        }
        for (auto x : note) {
            if (mag[x.first] < x.second) {
                return false;
            }
        }
        return true;

    }
};