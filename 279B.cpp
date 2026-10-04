// Books
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<int> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int max_books = 0;
    int current_books = 0;
    int current_time = 0;
    int i = 0, j = 0;

    while (j < n) {
        if (current_time + books[j] <= t) {
            current_time += books[j++];
            current_books += 1;
            max_books = max(max_books, current_books);
        } else if (current_books > 0) {
            current_time -= books[i++];
            current_books -= 1;
        } else {
            i++;
            j++;
        }
    }

    cout << max_books;

    return 0;
}