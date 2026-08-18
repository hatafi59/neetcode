class MinStack {
    stack<pair<int,int>> st ; //{val , min}
public:
    MinStack() {

    }
    void push(int val) {
        if(st.empty())
        st.push({val,val});
        else
        st.push({val,min(val,st.top().second)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        if(!st.empty())
        return st.top().first;
        return -1;
    }
    
    int getMin() {
        if(!st.empty())
            return st.top().second;
        return -1;
    }
};
