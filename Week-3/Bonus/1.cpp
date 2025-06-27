#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> L(n), diff(n + 2, 0);
    for (int i = 0; i < n; ++i) cin >> L[i];

    for (int i = 0; i < n; ++i) {
        int l = max(0, i - L[i]);
        diff[l]++;
        diff[i]--;
    }

    int prefix = 0, alive = 0;
    for (int i = 0; i < n; ++i) {
        prefix += diff[i];
        if (prefix == 0) alive++;
    }

    cout << alive << endl;
    return 0;
}
