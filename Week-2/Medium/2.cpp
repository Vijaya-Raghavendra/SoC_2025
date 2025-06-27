#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long total = (a + b) / 3;
        long long res;
        if (a < b) {
            if (a < total) res = a;
            else res = total;
        } else {
            if (b < total) res = b;
            else res = total;
        }
        cout << res << '\n';
    }
    return 0;
}
