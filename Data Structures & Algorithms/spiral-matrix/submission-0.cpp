class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        int l=0,u=0,r=m,d=n;
        vector<int> res;
        while(l<r && u<d){
            for(int i=l ; i<r ; i++) res.push_back(a[u][i]);
            u++;
            for(int i=u ; i<d ; i++) res.push_back(a[i][r-1]);
            r--;
            if (!(l < r && u < d)) break;
            for(int i=r-1 ; i>=l ; i--) res.push_back(a[d-1][i]);
            d--;
            for(int i=d-1 ; i>=u ; i--) res.push_back(a[i][l]);
            l++;
        }
        return res ;
        
    }
};
