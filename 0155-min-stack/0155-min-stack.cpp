class MinStack {
public:
    MinStack() {
        
    }
    vector<int>st;
    multiset<int> st1;
    void push(int val) {
         st.push_back(val);
         st1.insert(val);
    }
    
    void pop() {
        auto val = st[st.size()-1];
        st.pop_back();
        st1.erase(st1.find(val));
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        auto val = st1.begin();
        return *val;
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