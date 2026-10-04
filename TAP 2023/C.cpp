// Chromatic

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int n;
    cin >> n;

    vector<unsigned int> a(n);
    for (unsigned int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<unsigned int> b(n);
    for (unsigned int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    unsigned int min_paint = UINT_MAX;
    unsigned int max_paint = 0;
    for (unsigned int i = 0; i < n; i++) {
        min_paint = min(min_paint, a[i] + b[i]);
        max_paint = max(max_paint, a[i] + b[i]);
    }

    cout << max_paint - min_paint;

    return 0;
}