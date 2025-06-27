#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> target = {0,1,0,3,2,0,2,5};
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        int j = 0;
        for (int i = 0; i < n && j < 8; ++i) {
            if (a[i] == target[j]) ++j;
            if (j == 8) {
                cout << i + 1 << '\n';
                break;
            }
        }
        if (j < 8) cout << 0 << '\n';
    }
}
