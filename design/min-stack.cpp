class MinStack {
    stack<int>st;
    map<int,int>mpp;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        mpp[val]++;
    }
    
    void pop() {
    int t=st.top();
       st.pop(); 
    mpp[t]--;
    if(mpp[t]==0)mpp.erase(t);
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       auto m= mpp.begin();
       return m->first;
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