#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long len = 0, sum = 0;
        while (l + sum <= r) {
            len++;
            sum += len;
        }
        cout << len << '\n';
    }
    return 0;
}
