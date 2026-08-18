class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0;
        int maxLen = 1;

        // 1. Tous les palindromes de longueur 1
        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }

        // 2. Vérification des palindromes de longueur 2
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxLen = 2;
            }
        }

        // 3. Vérification pour les longueurs de 3 à n
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1; // Indice de fin

                // Transition de la programmation dynamique
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    if (len > maxLen) {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }

        // Retourner la plus longue sous-chaîne palindromique trouvée
        return s.substr(start, maxLen);
    }
};