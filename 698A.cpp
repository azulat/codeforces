// Vacations

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(3));
 
    int d;
    cin >> d;

    dp[0][0] = 1;
    dp[0][1] = (d == 0 || d == 2) ? INF : 0;
    dp[0][2] = (d == 0 || d == 1) ? INF : 0;

    for (int i = 1; i < n; i++) {
        cin >> d;

        dp[i][0] = min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;

        switch (d) {
        case 0:
            dp[i][1] = INF;
            dp[i][2] = INF;
            break;
        case 1:
            dp[i][1] = min({dp[i - 1][0], dp[i - 1][2]});
            dp[i][2] = INF;
            break;
        case 2:
            dp[i][1] = INF;
            dp[i][2] = min({dp[i - 1][0], dp[i - 1][1]});
            break;
        case 3:
            dp[i][1] = min({dp[i - 1][0], dp[i - 1][2]});
            dp[i][2] = min({dp[i - 1][0], dp[i - 1][1]});
            break;
        }
    }

    int min_rest = min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

    cout << min_rest;

    return 0;
}