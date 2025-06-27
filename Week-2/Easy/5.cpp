#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    sort(p.rbegin(), p.rend());
    int res = 0, i = 0;
    while (i < n) {
        int teamSize = 1;
        while (i + teamSize - 1 < n && p[i] * teamSize <= d) teamSize++;
        if (i + teamSize - 1 >= n) break;
        res++;
        i += teamSize;
    }
    cout << res << '\n';
    return 0;
}
