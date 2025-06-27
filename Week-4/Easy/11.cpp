#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, gold = 0, give = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) gold += a[i];
            else if (a[i] == 0 && gold > 0) {
                --gold;
                ++give;
            }
        }
        cout << give << '\n';
    }
}
