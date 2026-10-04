// Make The Fence Great Again

#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
const ull INF = 1e18 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        int a, b;
        cin >> a >> b;

        vector<vector<ull>> dp(n, vector<ull>(3));
        dp[0][0] = 0;
        dp[0][1] = b;
        dp[0][2] = 2 * b;

        for (int i = 1; i < n; i++) {
            int last_a = a;
            cin >> a >> b;

            for (int j = 0; j < 3; j++) {
                ull val = a + j;

                dp[i][j] = b * j + min({
                    (val != (ull)last_a) ? dp[i - 1][0] : INF,
                    (val != (ull)(last_a + 1)) ? dp[i - 1][1] : INF,
                    (val != (ull)(last_a + 2)) ? dp[i - 1][2] : INF,
                });
            }
        }

        ull ans = min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

        cout << ans << "\n";
    }

    return 0;
}