#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0, cnta = 0, cntb = 0;
        string res;
        while (i < n && j < m) {
            if ((a[i] < b[j] && cnta < k) || cntb == k) {
                res += a[i++];
                cnta++;
                cntb = 0;
            } else {
                res += b[j++];
                cntb++;
                cnta = 0;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
