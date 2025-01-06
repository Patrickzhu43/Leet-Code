class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        //unordered_map<char, int> mag;
        for (auto letter : magazine) {
            mag[letter]++;
        }
        for (auto letter : ransomNote) {
            mag[letter]--;
            if (mag[letter] < 0) {
                return false;
            }
        }
        return true;

    }
};