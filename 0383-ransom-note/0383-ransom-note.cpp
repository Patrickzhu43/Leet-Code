class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_set<char> s(ransomNote.begin(), ransomNote.end());
        for (int i = 0; i < s.size(); i++) {
            if (count(ransomNote.begin(), ransomNote.end(), *next(s.begin(), i)) > count(magazine.begin(), magazine.end(), *next(s.begin(), i))) {
                return false;
            }
        }
        return true;
    }
};