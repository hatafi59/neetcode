class Solution {
    vector<int> dp;

    int dfs(int amount, vector<int>& coins) {
        if (amount == 0) return 0;
        if (dp[amount] != -1) return dp[amount];

        int minCoins = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            if (amount - coins[i] >= 0){
                int res = dfs(amount - coins[i], coins);

                if (res != INT_MAX) 
                    minCoins = min(minCoins, 1 + res);
                
            }
            
        }
        return dp[amount] =  minCoins;
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);
        int minCoins = dfs(amount, coins);
        return minCoins == INT_MAX ? -1 : minCoins;
    }
};