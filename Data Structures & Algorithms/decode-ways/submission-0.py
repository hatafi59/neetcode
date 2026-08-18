class Solution:
    def numDecodings(self, s: str) -> int:
        dp = [0] * len(s)
        if s[0] == '0':
            return 0
        dp[0] = 1
        for i in range(1, len(s)):
            if s[i] == '0' and (int(s[i - 1]) > 2 or s[i - 1] == '0'):
                return 0
            elif s[i] == '0' and i > 1:
                dp[i] = dp[i - 2]

            elif s[i] != '0' and 10 <= int(s[i - 1: i + 1]) <= 26 and i > 2:
                dp[i] = dp[i - 1] + dp[i - 2]
            elif s[i] != '0' and 10 <= int(s[i - 1: i + 1]) <= 26:
                dp[i] = dp[i - 1] + 1
            else: #10, in 0 the same of previous
                dp[i] = dp[i - 1]
        #print(dp)
        return dp[-1]