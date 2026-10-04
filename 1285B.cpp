// Just Eat It!

#include <bits/stdc++.h>
using namespace std;

using i64 = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<i64> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool zero_found = false;

        vector<i64> psa(n + 1);
        psa[0] = 0;
        for (int i = 1; i < n + 1; i++) {
            psa[i] = psa[i - 1] + a[i - 1];
            zero_found = zero_found || psa[i] <= 0;
        }

        vector<i64> ssa(n + 1);
        ssa[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            ssa[i] = ssa[i + 1] + a[i];
            zero_found = zero_found || ssa[i] <= 0;
        }

        cout << (zero_found ? "NO" : "YES") << "\n";
    }
}
