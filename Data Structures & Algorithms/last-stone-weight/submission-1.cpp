class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        // 6 4 3 2 2
        while(pq.size()>1){
            int x=pq.top(); pq.pop();
            int y=pq.top(); pq.pop();
            if(x==y) continue;
            if(x>y) pq.push(x-y); 
        }
        return pq.empty() ? 0 : pq.top();
        
    }
};
