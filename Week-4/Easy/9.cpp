#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        map<int, vector<int>> groups;
        for (int i = 0; i < n; ++i)
            groups[a[i]].push_back(i);

        int minOps = INT_MAX;
        for (auto &[val, pos] : groups) {
            int ops = 0;
            int last = -2;
            for (int i : pos) {
                if (i != last + 1)
                    ops++;
                last = i;
            }
            minOps = min(minOps, ops);
        }

        cout << max(1, minOps - k) << '\n';
    }
}
