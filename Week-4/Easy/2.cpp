#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c >= d) {
            b -= d;
            if (b <= 0) cout << "Gellyfish\n";
            else cout << "Flower\n";
        } else {
            a -= c;
            if (a <= 0) cout << "Flower\n";
            else cout << "Gellyfish\n";
        }
    }
    return 0;
}
