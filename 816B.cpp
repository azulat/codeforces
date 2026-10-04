// Karen and Coffee

#include <bits/stdc++.h>
using namespace std;

constexpr unsigned long MAX = 200000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned long n, k, q;
    cin >> n >> k >> q;

    vector<long> temp(MAX + 1, 0);

    while (n--) {
        // Read recipe
        unsigned long l, r;
        cin >> l >> r;

        temp[l]++;
        temp[r+1]--;
    }

    vector<unsigned long> recommended_by(MAX + 1, 0);
    recommended_by[0] = temp[0];
    for (unsigned long i = 1; i < temp.size(); i++) {
        recommended_by[i] = recommended_by[i - 1] + temp[i];
    }

    vector<unsigned long> admissible(MAX + 1);
    admissible[0] = recommended_by[0] >= k ? 1 : 0;
    for (unsigned long i = 1; i < recommended_by.size(); i++) {
        admissible[i] = admissible[i - 1] + (recommended_by[i] >= k ? 1 : 0);
    }

    while (q--) {
        unsigned long l, r;
        cin >> l >> r;

        unsigned long admissible_temps = admissible[r] - admissible[l - 1];
        cout << admissible_temps << "\n";
    }

    return 0;
}