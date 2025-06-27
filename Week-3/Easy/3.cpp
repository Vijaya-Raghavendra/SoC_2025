#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        long long sumBlue = a[0], sumRed = 0;
        int blue = 1, red = 0;
        for (int i = n - 1; i > 0; --i) {
            sumRed += a[i];
            red++;
            if (red < blue && sumRed > sumBlue) {
                cout << "YES\n";
                goto next;
            }
            sumBlue += a[blue];
            blue++;
        }
        cout << "NO\n";
        next:;
    }
    return 0;
}
