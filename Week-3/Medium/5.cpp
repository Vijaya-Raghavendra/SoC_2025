#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    int dorm = 1;
    for (int i = 0; i < m; ++i) {
        long long b;
        cin >> b;
        while (b > prefix[dorm]) dorm++;
        cout << dorm << " " << b - prefix[dorm - 1] << '\n';
    }

    return 0;
}

