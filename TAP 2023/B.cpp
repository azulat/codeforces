// Black and White

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int dominoes = 0;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;

        bool negro = false;

        for (int j = 0; j < n; j++) {
            if (line[j] == 'N') {
                if (negro) {
                    dominoes += 1;
                    negro = false;
                } else {
                    negro = true;
                }
            } else {
                negro = false;
            }
        }
    }

    cout << dominoes;
}