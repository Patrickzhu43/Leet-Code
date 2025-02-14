class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(stones.begin(), stones.end());
        while (q.size() > 1) {
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            if (first != second) {
                q.push(max(first, second) - min(first, second));
            }
            else {
                q.push(0);
            }
        }
        return q.top();
    }
};