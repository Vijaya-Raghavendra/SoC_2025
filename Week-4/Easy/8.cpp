#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> cards(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                cin >> cards[i][j];
            sort(cards[i].begin(), cards[i].end());
        }

        vector<int> p(n);
        iota(p.begin(), p.end(), 0);

        bool found = false;
        do {
            vector<int> top = {-1};
            vector<int> ptr(n, 0);
            bool ok = true;
            for (int round = 0; round < m && ok; ++round) {
                for (int i = 0; i < n && ok; ++i) {
                    int cow = p[i];
                    while (ptr[cow] < m && cards[cow][ptr[cow]] <= top.back())
                        ptr[cow]++;
                    if (ptr[cow] == m)
                        ok = false;
                    else {
                        top.push_back(cards[cow][ptr[cow]]);
                        ptr[cow]++;
                    }
                }
            }
            if (ok) {
                for (int i = 0; i < n; ++i)
                    cout << p[i] + 1 << " ";
                cout << "\n";
                found = true;
                break;
            }
        } while (next_permutation(p.begin(), p.end()));

        if (!found)
            cout << "-1\n";
    }
}
