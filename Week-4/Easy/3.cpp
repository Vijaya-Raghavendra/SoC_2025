#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, res;
        cin >> s;
        vector<vector<char>> groups(10);
        for (char c : s) {
            int d = c - '0';
            for (int i = 10 - d; i <= 9; ++i) {
                groups[i].push_back(c);
                break;
            }
        }
        for (int i = 0; i < 10; ++i) {
            sort(groups[i].begin(), groups[i].end());
            for (char c : groups[i]) res += c;
        }
        cout << res << '\n';
    }
}
