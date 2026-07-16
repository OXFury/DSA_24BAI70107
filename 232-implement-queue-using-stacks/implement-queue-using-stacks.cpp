class MyQueue {
    stack<int> instack;
    stack<int> outstack;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        instack.push(x);
    }
    
    int pop() {
        peek();
        int front = outstack.top();
       outstack.pop();
        return front;
    }
    
    int peek() {
        if (outstack.empty()) {
            while (!instack.empty()) {
               outstack.push(instack.top());
                instack.pop();
            }
        }
        return outstack.top();
    }
    
    bool empty() {
        if(instack.empty() && outstack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */