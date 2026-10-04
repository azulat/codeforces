// Gamer series

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int gd = (a1 + a2) - (b1 + b2);
    if (gd > 0) {
        cout << 'A';
    } else if (gd < 0) {
        cout << 'P';
    } else {
        cout << 'D';
    }

    return 0;
}