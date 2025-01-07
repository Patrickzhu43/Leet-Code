class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[26] = {0};
        for (int i = 0; i < text.size(); i++) {
            count[text[i]-'a']++;
        }
        return min({count[1], count[0], count[11]/2, count[14]/2, count[13]});
    }
};