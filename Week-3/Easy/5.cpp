#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ones = 0, zeros = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 0 && ones > 0) zeros++;
            else if (x == 1) ones++;
        }
        cout << zeros << '\n';
    }
    return 0;
}

