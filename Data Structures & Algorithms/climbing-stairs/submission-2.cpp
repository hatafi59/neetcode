class Solution {
    vector<int> dp;
    
    int verify(int n,vector<int> &dp ){
        if(n<0) return 0;
        if(n==1 || n==0) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = verify(n-1,dp)+verify(n-2,dp) ;

    }
public:
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return verify(n,dp);
    }
};
