class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        //unordered_map<char, int> mag;
        for (int i = 0; i < magazine.size(); i++) {
            mag[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            mag[ransomNote[i]]--;
            if (mag[ransomNote[i]] < 0) {
                return false;
            }
        }
        return true;

    }
};