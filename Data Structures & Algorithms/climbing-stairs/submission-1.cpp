class Solution {
    int n;
    int verify(int i,vector<int> &dp ){
        if(i>n) return 0;
        if(i==n) return 1;
        if(dp[i] != -1) return dp[i];
        return dp[i] = verify(i+1,dp)+verify(i+2,dp) ;

    }
public:
    int climbStairs(int n) {
        this->n = n;
        vector<int> dp(n+1,-1); 

        // vector<vector<int>> dp(2,vector<int>(n+1));
        // dp[0][0]=1;
        // dp[1][0]=1;
        // for(int i=1;i>=2;i++)
        // for(int j=1 ; j<=n ; j++){
        //     if(i>j) dp[i][j]=dp[i][j-1];
        //     if()
        // }
        return verify(0,dp);
        
    }
};
