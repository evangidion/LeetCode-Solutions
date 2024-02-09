/*

You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.

*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        stack.push_back(stoi(tokens[0]));
        for(int i = 1; i < tokens.size(); i++) {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") stack.push_back(stoi(tokens[i]));
            else {
                int op2 = stack[stack.size()-1];
                int op1 = stack[stack.size()-2];
                stack.pop_back();
                stack.pop_back(); 
                if(tokens[i] == "+") stack.push_back(op1 + op2);
                else if(tokens[i] == "-") stack.push_back(op1 - op2);
                else if(tokens[i] == "*") stack.push_back(op1 * op2);
                else stack.push_back(op1 / op2);
            }
        }
        return stack[0];
    }
};