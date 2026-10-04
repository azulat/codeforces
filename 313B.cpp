// Ilya and Queries

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<unsigned int> ps(s.length());
    ps[0] = 0;
    for (unsigned int i = 1; i < s.length(); i++) {
        ps[i] = (s[i] == s[i-1] ? 1 : 0) + ps[i-1];
    }

    unsigned int m;
    cin >> m;

    while (m--) {
        unsigned int l, r;
        cin >> l;
        cin >> r;

        unsigned int query_ans = ps[r-1] - ps[l-1];
        cout << query_ans << "\n";
    }

    return 0;
}
