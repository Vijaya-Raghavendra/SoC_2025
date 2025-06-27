#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        int transitions = 0;
        for (int i = 1; i < n; ++i)
            if (s[i] != s[i - 1]) ++transitions;
        if (transitions <= 1) cout << n + transitions << '\n';
        else cout << n + 2 << '\n';
    }
}
