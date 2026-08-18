class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newInterval) {
        int s=newInterval[0],e=newInterval[1];
        vector<vector<int>> res;
        int n=a.size();
        int i=0;
        while (i < n && a[i][1] < s) {
            res.push_back(a[i]);
            i++;
        }
        while (i < n && a[i][0] <= e) {
            s = min(s, a[i][0]);
            e = max(e, a[i][1]);
            i++;
        }
        res.push_back({s,e});
        while (i < n) {
            res.push_back(a[i]);
            i++;
        }

        return res;
        
    }
};
