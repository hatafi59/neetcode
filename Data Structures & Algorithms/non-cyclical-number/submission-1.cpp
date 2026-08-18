class Solution {
    int fct(int n){
        int res=0 ;
        while(n){
            int d=n%10;
            res+=d*d;
            n/=10;
        }
        return res;
    }
public:

    bool isHappy(int n) {
        unordered_set<int> set;
        while(set.insert(n).second){
            if(n==1) return true;
            n=fct(n);
        }
        return false ;
        
    }
};
