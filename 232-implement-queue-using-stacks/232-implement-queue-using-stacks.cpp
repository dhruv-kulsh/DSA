class MyQueue 
{
private:
stack<int>s1;
stack<int>s2;
public:
    MyQueue() {
    }
    
    void push(int x) 
    {
        s1.push(x);
    }
    
    int pop() 
    {
        int top = -1;
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        if(!s2.empty())
        {
            top = s2.top();
            s2.pop();      
        }
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        return top;
    }
    
    int peek() 
    {
        int top = -1;
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        top = s2.top();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return top;
    }
 
    bool empty() 
    {
        if(s1.empty())
        {
            return true;
        }
        return false;
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