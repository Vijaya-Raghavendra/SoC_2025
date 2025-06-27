#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (i % 2 == 0) a.push_front(x);
            else a.push_back(x);
        }
        for (int x : a) cout << x << " ";
        cout << '\n';
    }
    return 0;
}

