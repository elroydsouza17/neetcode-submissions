class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> operands;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                operands.push(std::stoi(tokens[i]));
            } else {
                int a = operands.top();
                operands.pop();
                int b = operands.top();
                operands.pop();

                if (tokens[i] == "+") {
                    operands.push(b + a);
                } else if (tokens[i] == "-") {
                    operands.push(b - a);
                } else if (tokens[i] == "*") {
                    operands.push(b * a);
                } else {
                    operands.push(b / a);
                }
            }
        }

        return operands.top();
    }
};
