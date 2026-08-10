class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minSt.empty() || val<=minSt.top()){
            minSt.push(val);
        }
    }
    
    void pop() {
        int num = st.top();
        st.pop();
        if(minSt.top()==num){
            minSt.pop();
        
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
        
    }
};
