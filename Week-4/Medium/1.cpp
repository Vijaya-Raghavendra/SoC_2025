#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int cnt = 1;
        for (int i = 1, last = a[0]; i < n; ++i) {
            if (a[i] > last + 1) {
                ++cnt;
                last = a[i];
            } else if (a[i] > last) {
                last = a[i];
            }
        }
        cout << cnt << '\n';
    }
}
