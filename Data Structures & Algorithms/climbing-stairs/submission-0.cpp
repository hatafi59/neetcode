class Solution {
    int verify(int n,vector<int> &dp ){
        if(n<=0) return n==0;
        if(dp[n] != -1) return dp[n];
        return dp[n] = verify(n-1,dp)+verify(n-2,dp) ;
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return verify(n,dp);
        
    }
};
