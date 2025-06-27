#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));
        vector<pair<ll, vector<ll>>> info;
        for (int i = 0; i < n; ++i) {
            ll sum = 0;
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                sum += a[i][j];
            }
            info.push_back({sum, a[i]});
        }
        sort(info.begin(), info.end());
        ll res = 0;
        vector<ll> concat;
        for (auto& [_, arr] : info)
            concat.insert(concat.end(), arr.begin(), arr.end());
        ll cur = 0;
        for (ll x : concat) {
            cur += x;
            res += cur;
        }
        cout << res << '\n';
    }
}
