// Approximating a Constant Range

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = 1;
    int m = a[0] <= a[1] ? a[0] : a[1];
    int M = a[0] > a[1] ? a[0] : a[1];
    int last_change = a[0] != a[1] ? 1 : 0;
    int current_length = 1;
    int max_length = 1;

    while (j < n) {
        if (a[i] != a[j]) {
            last_change = j;
        }

        if (a[j] == m) {
            current_length++;
            j++;
        } else if (a[j] == M) {
            current_length++;
            j++;
        } else if (a[j] == M + 1) {
            if (m != M) m++;
            M++;
            current_length = j - last_change + 1;
        } else {
            if (m != M) M--;
            m--;
            current_length = j - last_change + 1;
        }
        
        max_length = max(max_length, current_length);
    }

    cout << max_length;
}

/*
Two pointers pero el i no lo estoy ocupando XD,
en realidad los dos punteros son j y last_change,
que debería renombrar a i y j respectivamente, en fin.

*/