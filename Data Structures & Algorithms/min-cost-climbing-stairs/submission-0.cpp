class Solution {
    int dfs(vector<int>& cost, int i, vector<int>& dp) {
        if (dp[i] != -1) return dp[i];
        if (i >= cost.size()) return 0;
        dp[i] = cost[i] + min(dfs(cost, i + 1, dp), dfs(cost, i + 2, dp));
        return dp[i];
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        // 0 pour  le sommet des escaliers
        cost.push_back(0);
        vector<int> dp(cost.size(), -1);
        return min(dfs(cost, 0, dp), dfs(cost, 1, dp));
    }
};
