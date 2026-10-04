// Sereja and Dima

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int i = 0, j = n - 1;
    int sereja_points = 0, dima_points = 0;
    bool sereja_turn = true;

    while (i <= j) {
        int points;
        if (cards[i] < cards[j]) {
            points = cards[j];
            j--;
        } else {
            points = cards[i];
            i++;
        }

        if (sereja_turn) {
            sereja_points += points;
        } else {
            dima_points += points;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja_points << " " << dima_points;
}