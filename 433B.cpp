// Kuriyama Mirai's Stones

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int n;
    cin >> n;

    vector<unsigned long long> v(n);
    for (unsigned int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<unsigned long long> psv1(n + 1);
    psv1[0] = 0;
    for (unsigned int i = 0; i < n; i++) {
        psv1[i+1] = psv1[i] + v[i];
    }

    sort(v.begin(), v.end());

    vector<unsigned long long> psv2(n + 1);
    psv2[0] = 0;
    for (unsigned int i = 0; i < n; i++) {
        psv2[i+1] = psv2[i] + v[i];
    }

    unsigned int m;
    cin >> m;

    while (m--) {
        unsigned int type, l, r;
        cin >> type;
        cin >> l;
        cin >> r;

        switch (type) {
            case 1:
                cout << psv1[r] - psv1[l-1] << "\n";
                break;
            case 2:
                cout << psv2[r] - psv2[l-1] << "\n";
                break;
        }
    }
    
    return 0;
}