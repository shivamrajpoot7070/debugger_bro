class MinStack {
public:
    stack<int>st;
    priority_queue<int,vector<int>,greater<int>>pq;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        pq.push(val);
    }
    
    void pop() {
        
        vector<int>rem;

        int top=st.top();

        while(pq.top()!=top){
            rem.push_back(pq.top());
            pq.pop();
        }
        pq.pop();

        for(int i=0;i<rem.size();i++){
            pq.push(rem[i]);
        }

        st.pop();
    }
    
    int top() {
        int x;
        if(st.size()>0) x=st.top();

        return x;
        
    }
    
    int getMin() {
        int x;
        if(pq.size()>0) x=pq.top();

        return x;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */