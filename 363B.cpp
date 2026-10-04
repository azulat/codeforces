// Fence

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int n, k;
    cin >> n >> k;

    vector<unsigned int> h(n);
    for (unsigned int i = 0; i < n; i++) {
        cin >> h[i];
    }

    unsigned int sum = 0;
    for (unsigned int i = 0; i < k; i++) {
        sum += h[i];
    }

    unsigned int min_sum = sum;
    unsigned int min_sum_idx = 0;

    unsigned int i = 0, j = k;
    while (j < n) {
        sum = sum + h[j] - h[i];
        if (sum < min_sum) {
            min_sum = sum;
            min_sum_idx = i + 1;
        }

        i++;
        j++;
    }

    cout << min_sum_idx + 1;
}