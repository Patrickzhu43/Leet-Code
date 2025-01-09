class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                res.push(stoi(tokens[i]));
            }
            else {
                int num2 = res.top();
                res.pop();
                int num1 = res.top();
                res.pop();
                if (tokens[i] == "+") {
                    res.push(num1 + num2);
                }
                if (tokens[i] == "-") {
                    res.push(num1 - num2) ;
                }
                if (tokens[i] == "*") {
                    res.push(num1 * num2);
                }
                if (tokens[i] == "/") {
                    res.push(num1 / num2);
                }
            }
        }
        return res.top();
    }
};