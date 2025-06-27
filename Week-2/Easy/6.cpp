#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        vector<long long> x(k);
        for (int i = 0; i < k; ++i) cin >> x[i];
        sort(x.rbegin(), x.rend());
        long long time = 0;
        int saved = 0;
        for (int i = 0; i < k; ++i) {
            if (x[i] > time) {
                saved++;
                time += n - x[i];
            } else break;
        }
        cout << saved << '\n';
    }
    return 0;
}

