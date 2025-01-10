class MinStack {
public:
    stack<pair<int,int>> st;
    int min;
    MinStack() {
        min = INT_MIN;
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        }
        else {
            if (val < st.top().second) {
                st.push({val, val});
            }
            else {
                st.push({val, st.top().second});
            }
        }

    }
    
    void pop() {
        if (st.empty()) {
            return;
        }
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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