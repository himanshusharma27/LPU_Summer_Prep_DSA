class MyStack {
public:

queue<int>q;  // make a quwue 
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x); // insert 
        int n = q.size(); // size 
        for(int i =0 ; i<n-1; i++){ // loopd 
            q.push(q.front());  
            q.pop();
        }
    }
    
    int pop() {
        int v = q.front(); 
        q.pop();
        return v ;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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
