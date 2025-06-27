#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> l(n), r(n);
        for (int &x : l) cin >> x;
        for (int &x : r) cin >> x;

        int total = 0, pairs = 0, extras = 0;
        vector<int> diff(n);
        for (int i = 0; i < n; ++i) {
            int p = min(l[i], r[i]);
            pairs += p;
            total += l[i] + r[i];
            diff[i] = abs(l[i] - r[i]);
        }

        if (pairs >= k) {
            cout << 2 * k << '\n';
        } else {
            int rem = k - pairs;
            sort(diff.rbegin(), diff.rend());
            int add = 0;
            for (int i = 0; i < n && rem > 0; ++i) {
                int take = min(rem, diff[i] / 2);
                add += take * 2;
                rem -= take;
            }
            cout << 2 * pairs + add + rem * 2 << '\n';
        }
    }
}
