class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res ;
        while(n){
            res+=(n&1);
            n>>=1;
        }
        return res ;

    }
};
