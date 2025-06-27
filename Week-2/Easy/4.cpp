#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i];
    vector<int> blocks;
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (t[i] == t[i - 1]) count++;
        else {
            blocks.push_back(count);
            count = 1;
        }
    }
    blocks.push_back(count);
    int ans = 0;
    for (int i = 1; i < blocks.size(); ++i) {
        ans = max(ans, 2 * min(blocks[i], blocks[i - 1]));
    }
    cout << ans << '\n';
    return 0;
}
