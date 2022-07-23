class MyStack {
private:
    int size;
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() 
    {
        size = 0;
    }
    
    void push(int x) 
    {
        q2.push(x);
        while(!q1.empty())
        {
            int front = q1.front();
            q2.push(front);
            q1.pop();
        }
        size++;
        queue<int>temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int pop() 
    {
        if(size == 0)
        {
            return -1;
        }
        int front = q1.front();
        q1.pop();
        size--;
        return front;
    }
    
    int top() 
    {
        if(!q1.empty())
        {
            cout<<q1.front()<<endl;
            return q1.front();        
        }

        else
            return -1;
    }
    
    bool empty() {
        if(q1.empty())
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