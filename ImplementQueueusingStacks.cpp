class MyQueue {
public:
    MyQueue() {

    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        while (inStack.size() > 1)
        {
            outStack.push(inStack.top());
            inStack.pop();
        }
        int peek = inStack.top();
        inStack.pop();
        while (!outStack.empty())
        {
            inStack.push(outStack.top());
            outStack.pop();
        }
        return peek;
    }

    int peek() {
        int peek = inStack.top();
        while (!inStack.empty())
        {
            outStack.push(inStack.top());
            inStack.pop();
            if (inStack.size() == 1) peek = inStack.top();
        }
        while (!outStack.empty())
        {
            inStack.push(outStack.top());
            outStack.pop();
        }
        return peek;
    }

    bool empty() {
        return inStack.empty();
    }
    stack<int> inStack;
    stack<int> outStack;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */