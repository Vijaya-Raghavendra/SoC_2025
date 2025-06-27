#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int left = 1, right = n;

    while (m--) {
        string s1, s2, s3;
        int x;
        cin >> s1 >> s2 >> s3 >> x;
        if (s3 == "left") {
            right = min(right, x - 1);
        } else {
            left = max(left, x + 1);
        }
    }

    if (left > right) cout << -1 << endl;
    else cout << right - left + 1 << endl;

    return 0;
}

