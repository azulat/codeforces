// WOW Factor

#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();

    vector<vector<ull>> dp(n, vector<ull>(3));  
    
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + ((s[i] == 'v' && s[i - 1] == 'v') ? 1 : 0);
        dp[i][1] = dp[i - 1][1] + ((s[i] == 'o') ? dp[i - 1][0] : 0);
        dp[i][2] = dp[i - 1][2] + ((s[i] == 'v' && s[i - 1] == 'v') ? dp[i - 1][1] : 0);
    }

    ull output = dp[n - 1][2];

    cout << output;

    return 0;
}