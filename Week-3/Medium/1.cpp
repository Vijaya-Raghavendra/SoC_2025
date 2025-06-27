#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        long long sum = 0;
        long long curr = a[0];

        for (int i = 1; i < n; ++i) {
            if ((a[i] > 0) == (curr > 0)) {
                if (a[i] > curr) curr = a[i];
            } else {
                sum += curr;
                curr = a[i];
            }
        }
        sum += curr;

        cout << sum << '\n';
    }
    return 0;
}
