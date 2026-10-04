// Maximum Increase

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n);
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = a[i] > a[i - 1] ? dp[i - 1] + 1 : 1;
    }

    int max_len = INT32_MIN;
    for (auto v : dp) {
        max_len = max(max_len, v);
    }

    cout << max_len;
}

/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cur_len = 0;
    int max_len = INT32_MIN;
    int last_val = INT32_MIN;
    while (n--) {
        int a;
        cin >> a;

        if (a > last_val) {
            max_len = max(max_len, ++cur_len);
        } else {
            cur_len = 1;
        }

        last_val = a;
    }

    cout << max_len;

    return 0;
}
*/