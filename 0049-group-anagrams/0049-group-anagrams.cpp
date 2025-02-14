class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> result;
        for (auto word : strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            anagrams[sorted].push_back(word);
        }
        for (auto it : anagrams) {
            result.push_back(it.second);
        }
        return result;
    }
};