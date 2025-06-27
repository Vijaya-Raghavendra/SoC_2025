#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, w_count = 0, min_white = 1e9;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') w_count++;
        }
        min_white = w_count;

        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') w_count--;
            if (s[i] == 'W') w_count++;
            if (w_count < min_white) min_white = w_count;
        }

        cout << min_white << '\n';
    }
    return 0;
}
