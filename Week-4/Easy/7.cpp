#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] <= i) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}

