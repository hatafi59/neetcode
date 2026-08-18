class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> s;
    int res = 0;
    int sommet;
    for (int i = 0; i < n; i++) {      
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            sommet = s.top();  s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            res = max(res,  heights[sommet] * width);
        }
        s.push(i);
    }
    int curr ;
    while (!s.empty()) {
        sommet = s.top(); s.pop();
        curr = heights[sommet] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }
    return res;
    }
};
