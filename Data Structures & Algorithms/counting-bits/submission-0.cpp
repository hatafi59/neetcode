class Solution {
    int count1(int n) {
        int res=0;
        while(n){
            res+=(n&1);
            n>>=1;
        }
        return res ;
    }

public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        for(int i=0 ; i<=n ; i++){
            v[i]=count1(i);
        }
        return v;
        
    }
};
