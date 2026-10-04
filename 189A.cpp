// Cut Ribbon

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, INT32_MIN);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int ma = i >= a ? dp[i - a] : INT32_MIN;
        int mb = i >= b ? dp[i - b] : INT32_MIN;
        int mc = i >= c ? dp[i - c] : INT32_MIN;

        dp[i] = max({ma, mb, mc}) + 1;
    }

    std::cout << dp[n];

    return 0;
}