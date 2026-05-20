class MinStack {
private:
stack<int> st;
stack<int> minSt;
public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        val = min(val, minSt.empty() ? val: minSt.top());
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp;
        int mini = st.top();
        while(st.size()){
            mini = min(mini, st.top());
            temp.push(st.top());
            st.pop();
        }
        while(temp.size()){
            st.push(temp.top());
            temp.pop();
        }
        return mini;
    }
};
