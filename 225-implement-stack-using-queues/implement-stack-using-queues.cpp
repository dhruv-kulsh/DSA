class MyStack {
    queue<int> q;
    int size;

public:
    MyStack() { size = 0; }

    void push(int x) {
        q.push(x);
        int cnt = 0;
        while (cnt < q.size()-1) {
            int front = q.front();
            q.pop();
            q.push(front);
            cnt++;
        }
    }

    int pop() {
        if (q.empty())
            return -1;
        int top = q.front();
        q.pop();
        return top;
    }

    int top() {
        if (q.empty())
            return -1;
        return q.front();
    }

    bool empty() {
        if (q.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */