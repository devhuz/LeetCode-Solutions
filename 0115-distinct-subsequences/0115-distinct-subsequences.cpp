class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        const long long CAP = INT_MAX;
        vector<long long> dp(n + 1, 0);
        dp[n] = 1;
        for (int i = m - 1; i >= 0; i--) {
            long long prev = 1;
            for (int j = n - 1; j >= 0; j--) {
                long long res = dp[j];
                if (s[i] == t[j]) {
                    res += prev;
                    if (res > CAP) res = CAP;
                }
                prev = dp[j];
                dp[j] = res;
            }
        }
        return (int)dp[0];
    }
};   