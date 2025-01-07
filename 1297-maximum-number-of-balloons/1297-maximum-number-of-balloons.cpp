class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[26] = {0};
        for (int i = 0; i < text.size(); i++) {
            count[text[i]-'a']++;
        }
        count['l'-'a'] /= 2;
        count['o'-'a'] /= 2;
        int result = min(count['b'-'a'], count[0]);
        result = min(result, count['l'-'a']);
        result = min(result, count['o'-'a']);
        return min(result, count['n'-'a']);
    }
};