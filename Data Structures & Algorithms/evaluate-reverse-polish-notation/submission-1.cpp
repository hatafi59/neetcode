class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto & it : tokens){
            if(it!="*" && it!="+" && it!="/" && it!="-") st.push(stoi(it));
            else{
                char c=it[0];
                int a=st.top(); st.pop();
                int b=st.top(); st.pop();
                switch(c){
                    case '*':
                    st.push(a*b);
                    break;
                    case'+':
                    st.push(a+b);
                    break;
                    case'/':
                    st.push(b/a);
                    break;
                    case'-':
                    st.push(b-a);
                    break;
                }
            }
        }
        return st.top();
        
    }
};
