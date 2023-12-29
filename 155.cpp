class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;
public: 
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty() || val <= minStack.top())
            minStack.push(val);
        return;
    }
    
    void pop() {
        if(minStack.top() == mainStack.top())
            minStack.pop();
        mainStack.pop();
        return;
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};