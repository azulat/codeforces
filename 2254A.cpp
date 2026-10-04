// Riptide

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<int> nums(3);
        cin >> nums[0] >> nums[1] >> nums[2];

        sort(nums.begin(), nums.end());

        int rounds = min(nums[2] - nums[1], nums[1] - nums[0]);

        cout << rounds << "\n";
    }
}