class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int temp = scores.top();
                scores.pop();
                int sum = scores.top() + temp;
                scores.push(temp);
                scores.push(sum);
            }
            else if (operations[i] == "D") {
                scores.push(2*scores.top());
            }
            else if (operations[i] == "C") {
                scores.pop();
            }
            else {
                scores.push(stoi(operations[i]));
            }
        }
        int total = 0;
        while (!scores.empty()) {
            total += scores.top();
            scores.pop();
        }
        return total;
    }
};