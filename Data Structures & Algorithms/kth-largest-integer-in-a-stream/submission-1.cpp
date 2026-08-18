class KthLargest {
    int _k;
    priority_queue<int,vector<int>,greater<>> Q;
public:
    KthLargest(int k, vector<int>& nums) {
        _k=k;
        for (int num : nums) {
            Q.push(num);
            if (Q.size() > k) {
                Q.pop(); 
            }
    }
    }
    
    int add(int val) {
        Q.push(val);
        if (Q.size() >_k) Q.pop();
        return Q.top();
        
    }
    
};
