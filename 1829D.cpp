// Gold Rush

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool can_make_pile = false;
        queue<int> nodes;
        unordered_set<int> visited;

        nodes.push(n);
        while (!nodes.empty()) {
            int node = nodes.front();
            nodes.pop();

            if (node == m) {
                can_make_pile = true;
                break;
            } else if (node > m && node % 3 == 0) {
                int a = node / 3;
                int b = 2 * node / 3;
                
                if (!visited.count(a)) {
                    visited.insert(a);
                    nodes.push(a);
                }

                if (!visited.count(b)) {
                    visited.insert(b);
                    nodes.push(b);
                }
            }
        }

        cout << (can_make_pile ? "YES" : "NO") << "\n";
    }

    return 0;
}