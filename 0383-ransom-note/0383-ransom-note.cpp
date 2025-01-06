class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        //unordered_map<char, int> mag;
        for (auto letter : magazine) {
            mag[letter]++;
        }
        for (auto letter : ransomNote) {
            if (mag[letter] > 0) {
                mag[letter]--;
            }
            else {
                return false;
            }
        }
        return true;

    }
};