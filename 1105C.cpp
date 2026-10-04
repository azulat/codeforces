// Ayoub and Lost Array

#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
const ull MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n, l, r;
    cin >> n >> l >> r;

    vector<ull> rem(3);
    for (ull i = 0; i < 3; i++) {
        ull idx = l + i;
        rem[idx % 3] = idx > r ? 0 : (r - idx) / 3 + 1;
    }

    vector<vector<ull>> dp(n, vector<ull>(3));
    dp[0][0] = rem[0];
    dp[0][1] = rem[1];
    dp[0][2] = rem[2];

    for (ull i = 1; i < n; i++) {
        dp[i][0] = (dp[i - 1][0] * rem[0] + dp[i - 1][1] * rem[2] + dp[i - 1][2] * rem[1]) % MOD;
        dp[i][1] = (dp[i - 1][0] * rem[1] + dp[i - 1][1] * rem[0] + dp[i - 1][2] * rem[2]) % MOD;
        dp[i][2] = (dp[i - 1][0] * rem[2] + dp[i - 1][1] * rem[1] + dp[i - 1][2] * rem[0]) % MOD;
    }

    ull ans = dp[n - 1][0];

    cout << ans % MOD << "\n";

    return 0;
}