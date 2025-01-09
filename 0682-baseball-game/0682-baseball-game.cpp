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
                int negative = 1;
                if (operations[i][0] == '-') {
                    negative = -1;
                    operations[i].erase(operations[i].begin());
                }
                scores.push(stoi(operations[i])*negative);
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