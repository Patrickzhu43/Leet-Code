class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i = 0; i < ransomNote.size(); i++) {
            if (count(ransomNote.begin(), ransomNote.end(), ransomNote[i]) > count(magazine.begin(), magazine.end(), ransomNote[i])) {
                return false;
            }
        }
        return true;
    }
};