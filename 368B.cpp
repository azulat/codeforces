// Sereja and Suffixes

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> items;
    vector<int> su(n, 1);
    items.insert(a[n - 1]);

    for (int i = n - 2; i >= 0; i--) {
        if (!items.count(a[i])) {
            su[i] = su[i + 1] + 1;
            items.insert(a[i]);
        } else {
            su[i] = su[i + 1];
        }
    }

    while (m--) {
        int i;
        cin >> i;

        int unique = su[i - 1];
        cout << unique << "\n";
    }
}