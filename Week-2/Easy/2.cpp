#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        for (int i = 0; i < k; ++i) cin >> a[i];

        vector<int> winners(101);
        for (int n = 1; n <= 100; ++n) {
            int alive = n;
            vector<int> pos;
            for (int i = 1; i <= n; ++i) pos.push_back(i);

            while (true) {
                vector<int> to_remove;
                for (int x : a) {
                    if (x <= (int)pos.size()) to_remove.push_back(pos[x - 1]);
                }
                if (to_remove.empty()) break;

                vector<int> next_pos;
                int idx = 0, rm_idx = 0;
                while (idx < (int)pos.size()) {
                    if (rm_idx < (int)to_remove.size() && pos[idx] == to_remove[rm_idx]) {
                        ++idx;
                        ++rm_idx;
                    } else {
                        next_pos.push_back(pos[idx++]);
                    }
                }
                pos = next_pos;
            }
            winners[n] = pos.size();
        }

        for (int i = 0; i < q; ++i) {
            int ni;
            cin >> ni;
            cout << winners[ni] << " ";
        }
        cout << "\n";
    }
    return 0;
}
