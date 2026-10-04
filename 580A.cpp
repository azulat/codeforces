// Kefa and First Steps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int last;
    cin >> last;

    int current_length = 1;
    int max_length = 1;

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;

        if (a >= last) {
            max_length = max(max_length, ++current_length);
        } else {
            current_length = 1;
        }

        last = a;
    }

    cout << max_length;

    return 0;
}