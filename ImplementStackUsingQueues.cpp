class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        innerQueue1.push(x);
    }
    
    int pop() {
        int tmp = innerQueue1.back();
        int sizeOfInnerQueue1 = innerQueue1.size();
        while(!innerQueue2.empty())
        {
            innerQueue2.pop();
        }
        for(int i = 0; i < sizeOfInnerQueue1 - 1; i++)
        {
            innerQueue2.push(innerQueue1.front());
            innerQueue1.pop();
        }
        swap(innerQueue1, innerQueue2);
        return tmp;
    }
    
    int top() {
        return innerQueue1.back();
    }
    
    bool empty() {
        return innerQueue1.empty();
    }
private:
    queue<int> innerQueue1;
    queue<int> innerQueue2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */