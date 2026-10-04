// Odd Selection

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int t;
    cin >> t;

    while (t--) {
        unsigned int n, x;
        cin >> n >> x;

        unsigned int odd = 0, even = 0;

        for (unsigned int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        bool ans = false;
        for (unsigned int i = 1; i <= odd && i <= x; i += 2) {
            unsigned int needed_even = x - i;
            if (needed_even <= even) {
                ans = true;
                break;
            }
        }
        
        cout << (ans ? "Yes" : "No") << "\n";
    }

    return 0;
}