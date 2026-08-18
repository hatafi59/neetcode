class Solution {
    bool dfs(int i, string& s, vector<string>& words, vector<int>& memo) {
        if (i == s.size()) return true;
        if (memo[i] != -1) return memo[i];

        for (auto& word : words) {
            if (i + word.size() <= s.size() && s.substr(i, word.size()) == word) {
                if (dfs(i + word.size(), s, words, memo))
                    return memo[i] = true;
            }
        }
        return memo[i] = false;
    }

public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> memo(s.size(), -1);
        return dfs(0, s, wordDict, memo);
    }
};
