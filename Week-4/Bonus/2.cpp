#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) ok = false;
            else if (a[i] < b[i] && b[i] > b[(i + 1) % n]) ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
