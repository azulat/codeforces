// Beautiful Array

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<vector<ll>> dp(n, vector<ll>(3));
    
    ll a;
    cin >> a;
    
    dp[0][0] = a;
    dp[0][1] = a * x;
    dp[0][2] = a;

    ll max_beauty = max({0ll, a, a * x});

    for (int i = 1; i < n; i++) {
        cin >> a;

        dp[i][0] = max({0ll, dp[i - 1][0]}) + a;
        dp[i][1] = max({0ll, dp[i - 1][0], dp[i - 1][1]}) + a * x;
        dp[i][2] = max({0ll, dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + a;

        max_beauty = max({max_beauty, dp[i][0], dp[i][1], dp[i][2]});
    }

    cout << max_beauty;

    return 0;
}