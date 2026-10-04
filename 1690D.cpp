// Black and White Stripe

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string w;
        cin >> w;

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += w[i] == 'W' ? 1 : 0;
        }

        int min_sum = sum;

        int i = 0, j = k;
        while (j < n) {
            sum -= w[i] == 'W' ? 1 : 0;
            sum += w[j] == 'W' ? 1 : 0;

            min_sum = min(min_sum, sum);

            i++;
            j++;
        }

        cout << min_sum << "\n";
    }

    return 0;
}