#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        vector<int> green_pos;
        for (int i = 0; i < 2 * n; ++i) {
            if (s[i % n] == 'g') {
                green_pos.push_back(i);
            }
        }

        int max_wait = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                auto it = lower_bound(green_pos.begin(), green_pos.end(), i);
                max_wait = max(max_wait, *it - i);
            }
        }

        cout << max_wait << '\n';
    }
    return 0;
}
