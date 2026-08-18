class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map;
        map[')']='('; 
        map['}']='{' ; 
        map[']']='[';
        stack<char> stack ;
        for(auto &c : s){
            if(c =='(' ||c=='{' ||c=='[') stack.push(c);
            else if( stack.empty() || stack.top()!=map[c]) return false ;
            else stack.pop();
        }
        return stack.empty() ;
        
    }
};
