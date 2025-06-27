#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = a + b + c;
        if (sum % 9 == 0) {
            long long shots = sum / 9;
            if (a >= shots && b >= shots && c >= shots)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
