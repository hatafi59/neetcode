class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    stack<int> s;
    int sum = 0;
    s.push(0);
    int max_s = height[s.top()] ;
    for (int i = 1; i < n; i++) { 
        if(height[i] < max_s) { s.push(i); continue ;} 
        while (!s.empty()) {
            sum+=(max_s-height[s.top()]);
            cout<<sum<<" ";
            s.pop();
        }
        s.push(i);
        max_s = height[s.top()];
    }
    stack<int> reste ;
    reste.push(s.top());
    int max_reste =  height[s.top()] ;
    s.pop();
    while(!s.empty()){
        if(height[s.top()] < max_reste){ 
            reste.push(s.top());
            s.pop();
            continue ;}
        while (!reste.empty()) {
            sum+=(max_reste-height[reste.top()]);
            reste.pop();
        }
        reste.push(s.top());
        max_reste = height[reste.top()];
        s.pop();
    }
    return sum ;
    }
};
