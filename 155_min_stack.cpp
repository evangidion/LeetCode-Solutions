/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

*/

class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push_back(val);
        if(stack2.empty() || val <= getMin()) stack2.push_back(val);
    }
    
    void pop() {    
        if(stack1[stack1.size()-1] == getMin()) stack2.pop_back();
        stack1.pop_back();
    }
    
    int top() {
        return stack1[stack1.size()-1];
    }
    
    int getMin() {
        return stack2[stack2.size()-1];
    }
private:
    vector<int> stack1;
    vector<int> stack2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */