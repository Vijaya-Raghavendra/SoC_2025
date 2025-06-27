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
        vector<int> w(n);
        for (int i = 0; i < n; ++i) cin >> w[i];

        vector<int> freq(n + 1, 0);
        for (int wi : w) freq[wi]++;

        int max_teams = 0;
        for (int s = 2; s <= 2 * n; ++s) {
            int teams = 0;
            for (int i = 1; i < s; ++i) {
                if (i <= n && s - i <= n) {
                    if (i == s - i)
                        teams += freq[i] / 2;
                    else if (i < s - i)
                        teams += min(freq[i], freq[s - i]);
                }
            }
            max_teams = max(max_teams, teams);
        }

        cout << max_teams << '\n';
    }
    return 0;
}
