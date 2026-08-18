class Solution {
    using Element = pair<float, vector<int>>;
    struct Compare {
        bool operator()(const Element &a, const Element &b) {
            return a.first < b.first; // Trie par ordre décroissant de float
    }
};
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<Element, vector<Element>, Compare> pq;
        for(auto &it : points){
            float d=sqrt((it[0]*it[0])+(it[1]*it[1]));
            pq.push({d,it});
            if(pq.size()>k) pq.pop();
        }
        while(! pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
        
    }
};
