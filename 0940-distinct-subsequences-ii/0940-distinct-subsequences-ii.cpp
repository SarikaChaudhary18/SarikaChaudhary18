class Solution {
public:
    int distinctSubseqII(string s) {
         const int MOD = 1e9 + 7;
        int n = s.size();
        vector<long long> dp(n + 1, 0);
        dp[0] = 1;        
        vector<int> last(26, -1);
        for (int i = 1; i <= n; i++) {
            char ch = s[i - 1];
            int c = ch - 'a';
            dp[i] = (2 * dp[i - 1]) % MOD;
            if (last[c] != -1) {
                int j = last[c];
                dp[i] = (dp[i] - dp[j - 1] + MOD) % MOD;
            }
            last[c] = i;
        }
        return (dp[n] - 1 + MOD) % MOD;
    }
};