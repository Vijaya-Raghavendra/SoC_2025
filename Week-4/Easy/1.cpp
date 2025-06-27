#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int time = 0;
        bool used = false;
        int i = 0;
        while (i < n) {
            if (a[i] == 0) {
                ++time;
                ++i;
            } else {
                if (used) {
                    break;
                }
                // Try to open as many doors as possible within x seconds
                used = true;
                int j = 0;
                while (i < n && j < x) {
                    ++i;
                    ++j;
                }
                time += j;
            }
        }

        cout << (i == n ? "YES" : "NO") << '\n';
    }
}
