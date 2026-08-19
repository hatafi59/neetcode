class Solution {
    int dfs(vector<int>& cost, int i, vector<int>& dp) {
        if (dp[i] != -1) return dp[i];
        if (i >= cost.size()) return 0;
        int cost1 = (i + 1 < cost.size()) ? dfs(cost, i + 1, dp) : 0;
        int cost2 = (i + 2 < cost.size()) ? dfs(cost, i + 2, dp) : 0;
        dp[i] = cost[i] + min(cost1, cost2);
        cout<<i<<"-->"<<dp[i]<<endl;
        return dp[i];
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        // // 0 pour  le sommet des escaliers
        // cost.push_back(0);
        // vector<int> dp(cost.size(), -1);
        // return min(dfs(cost, 0, dp), dfs(cost, 1, dp));

        // dp[i] : the minimum cost to reach the i floor
        int n=cost.size();
        vector<int> dp(n,0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < n; i++) {
            dp[i] = min(dp[i - 1] , dp[i - 2]) + cost[i];
        }

        return min(dp[n-1],dp[n-2]);
    }
};
