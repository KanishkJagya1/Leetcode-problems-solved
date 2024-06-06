// The approach to this solution is by using the stack to append the numbers 
// the question is similiar to prefix to postfix conversion and the correct usage of push pop and top function will ead to the right answer for the above mentioned question
// Folow the exact steps from initialization of stack to push and pop after using the top function to get the desired output


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                if (token == "+") {
                    stack.push(a + b);
                } else if (token == "-") {
                    stack.push(a - b);
                } else if (token == "*") {
                    stack.push(a * b);
                } else if (token == "/") {
                    stack.push(a / b);
                }
            } else {
                stack.push(stoi(token));
            }
        }

        return stack.top();
    }
};
