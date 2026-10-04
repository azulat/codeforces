// Team Composition: Programmers and Mathematicians

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int max_teams = (a + b) / 4;

        cout << min(min(a, b), max_teams) << "\n";
    }
    
    return 0;
}