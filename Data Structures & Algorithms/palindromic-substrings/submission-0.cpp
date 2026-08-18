class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        if (n <= 1) return n;

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int res=0;

        // 1. Tous les palindromes de longueur 1
        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }

        res+=n;

        // 2. Vérification des palindromes de longueur 2
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                res++;
            }
        }

        // 3. Vérification pour les longueurs de 3 à n
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1; // Indice de fin

                //s[i] == s[j] and substring between i and j is also palindrome ?
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    res++;
                }
            }
        }

        // Retourner la plus longue sous-chaîne palindromique trouvée
        return res;
    }
};
