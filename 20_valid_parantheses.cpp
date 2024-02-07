/* 

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

*/

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') stack.push_back(s[i]);
            else {
                if(s[i] == ')') {
                    if(stack.size() && stack[stack.size() - 1] == '(') stack.pop_back();
                    else return false;
                }
                else if(s[i] == ']') {
                    if(stack.size() && stack[stack.size() - 1] == '[') stack.pop_back();
                    else return false;
                }
                else {
                    if(stack.size() && stack[stack.size() - 1] == '{') stack.pop_back();
                    else return false;
                }
            }
        }
        if(!stack.size()) return true;
        else return false;
    }
};