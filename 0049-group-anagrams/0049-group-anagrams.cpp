class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++) {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            anagrams[sorted].push_back(strs[i]);
        }
        for (auto it : anagrams) {
            result.push_back(it.second);
        }
        return result;
    }
};