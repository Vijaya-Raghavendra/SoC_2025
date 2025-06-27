#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long water_needed(const vector<int>& a, int h) {
    long long water = 0;
    for (int ai : a) {
        if (ai < h) water += h - ai;
    }
    return water;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<int> a(n);
        int max_a = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > max_a) max_a = a[i];
        }

        int low = 1, high = max_a + x, ans = 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (water_needed(a, mid) <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
