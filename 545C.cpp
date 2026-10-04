// Woodcutters

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n <= 2) {
        cout << n;
        return 0;
    }

    vector<pair<int, int>> trees(n);
    for (int i = 0; i < n; i++) {
        int x, h;
        cin >> x >> h;

        trees[i] = make_pair(x, h);
    }

    int last_x = trees[0].first;
    int cut = 2;
    for (int i = 1; i < n - 1; i++) {
        int x = trees[i].first, h = trees[i].second;

        if (x - h > last_x) {
            cut++;
            last_x = x;
        } else if (x + h < trees[i + 1].first) {
            cut++;
            last_x = x + h;
        } else {
            last_x = x;
        }
    }

    cout << cut;

    return 0;
}