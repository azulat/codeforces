// Boredom

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    size_t n;
    cin >> n;

    vector<size_t> freq(10e5 + 1);
    for (size_t i = 1; i <= n; i++) {
        size_t a;
        cin >> a;
        freq[a]++;
    }

    vector<size_t> dp(10e5 + 1);
    dp[0] = 0;
    dp[1] = freq[1];
    for (size_t i = 2; i <= 10e5; i++) {
        dp[i] = max({dp[i - 1], dp[i - 2] + freq[i] * i});
    }

    cout << dp[10e5];
}